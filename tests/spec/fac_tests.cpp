#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdlib>
#include <catch2/catch.hpp>
#include <utils.hpp>
#include <wasm_config.hpp>
#include <arisen/vm/backend.hpp>

using namespace arisen;
using namespace arisen::vm;
extern wasm_allocator wa;

BACKEND_TEST_CASE( "Testing wasm <fac_0_wasm>", "[fac_0_wasm_tests]" ) {
   using backend_t = backend<std::nullptr_t, TestType>;
   auto code = backend_t::read_wasm( std::string(wasm_directory) + "fac.0.wasm");
   backend_t bkend( code );
   bkend.set_wasm_allocator( &wa );
   bkend.initialize(nullptr);

   CHECK(bkend.call_with_return(nullptr, "env", "fac-rec", UINT64_C(25))->to_ui64() == UINT32_C(7034535277573963776));
   CHECK(bkend.call_with_return(nullptr, "env", "fac-iter", UINT64_C(25))->to_ui64() == UINT32_C(7034535277573963776));
   CHECK(bkend.call_with_return(nullptr, "env", "fac-rec-named", UINT64_C(25))->to_ui64() == UINT32_C(7034535277573963776));
   CHECK(bkend.call_with_return(nullptr, "env", "fac-iter-named", UINT64_C(25))->to_ui64() == UINT32_C(7034535277573963776));
   CHECK(bkend.call_with_return(nullptr, "env", "fac-opt", UINT64_C(25))->to_ui64() == UINT32_C(7034535277573963776));
}

