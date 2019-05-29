#pragma once

#include <eosio/vm/execution_context.hpp>
#include <eosio/vm/opcodes.hpp>

#include <eosio/vm/config.hpp>
#include <eosio/vm/softfloat.hpp>

namespace eosio { namespace vm {

   struct base_visitor {
      [[gnu::always_inline]] inline void operator()(const unreachable_t& ) {}
      [[gnu::always_inline]] inline void operator()(const nop_t& ) {}
      [[gnu::always_inline]] inline void operator()(const fend_t& ) {}
      [[gnu::always_inline]] inline void operator()(const end_t& ) {}
      [[gnu::always_inline]] inline void operator()(const return__t& ) {}
      [[gnu::always_inline]] inline void operator()(block_t& ) {}
      [[gnu::always_inline]] inline void operator()(loop_t& ) {}
      [[gnu::always_inline]] inline void operator()(if__t& ) {}
      [[gnu::always_inline]] inline void operator()(const else__t& ) {}
      [[gnu::always_inline]] inline void operator()(const br_t& ) {}
      [[gnu::always_inline]] inline void operator()(const br_if_t& ) {}
      [[gnu::always_inline]] inline void operator()(const br_table_t& ) {}
      [[gnu::always_inline]] inline void operator()(const call_t& ) {}
      [[gnu::always_inline]] inline void operator()(const call_indirect_t& ) {}
      [[gnu::always_inline]] inline void operator()(const drop_t& ) {}
      [[gnu::always_inline]] inline void operator()(const select_t& ) {}
      [[gnu::always_inline]] inline void operator()(const get_local_t& ) {}
      [[gnu::always_inline]] inline void operator()(const set_local_t& ) {}
      [[gnu::always_inline]] inline void operator()(const tee_local_t& ) {}
      [[gnu::always_inline]] inline void operator()(const get_global_t& ) {}
      [[gnu::always_inline]] inline void operator()(const set_global_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_load_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_load8_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_load16_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_load8_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_load16_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load8_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load16_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load32_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load8_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load16_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_load32_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_load_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_load_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_store_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_store8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_store16_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_store_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_store8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_store16_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_store32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_store_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_store_t& ) {}
      [[gnu::always_inline]] inline void operator()(const current_memory_t& ) {}
      [[gnu::always_inline]] inline void operator()(const grow_memory_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_const_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_const_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_const_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_const_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_eqz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_eq_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_ne_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_lt_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_lt_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_le_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_le_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_gt_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_gt_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_ge_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_ge_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_eqz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_eq_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_ne_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_lt_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_lt_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_le_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_le_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_gt_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_gt_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_ge_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_ge_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_eq_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_ne_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_lt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_gt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_le_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_ge_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_eq_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_ne_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_lt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_gt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_le_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_ge_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_clz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_ctz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_popcnt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_add_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_sub_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_mul_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_div_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_div_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_rem_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_rem_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_and_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_or_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_xor_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_shl_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_shr_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_shr_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_rotl_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_rotr_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_clz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_ctz_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_popcnt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_add_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_sub_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_mul_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_div_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_div_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_rem_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_rem_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_and_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_or_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_xor_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_shl_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_shr_s_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_shr_u_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_rotl_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_rotr_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_abs_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_neg_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_ceil_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_floor_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_trunc_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_nearest_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_sqrt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_add_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_sub_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_mul_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_div_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_min_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_max_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_copysign_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_abs_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_neg_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_ceil_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_floor_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_trunc_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_nearest_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_sqrt_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_add_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_sub_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_mul_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_div_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_min_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_max_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_copysign_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_wrap_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_trunc_s_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_trunc_u_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_trunc_s_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_trunc_u_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_extend_s_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_extend_u_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_trunc_s_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_trunc_u_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_trunc_s_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_trunc_u_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_convert_s_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_convert_u_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_convert_s_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_convert_u_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_demote_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_convert_s_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_convert_u_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_convert_s_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_convert_u_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_promote_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i32_reinterpret_f32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const i64_reinterpret_f64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f32_reinterpret_i32_t& ) {}
      [[gnu::always_inline]] inline void operator()(const f64_reinterpret_i64_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC1_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC2_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC3_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC4_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC5_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC6_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC7_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xC9_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCA_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCB_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCC_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCD_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCE_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xCF_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD0_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD1_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD2_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD3_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD4_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD5_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD6_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD7_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xD9_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDA_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDB_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDC_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDD_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDE_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xDF_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE0_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE1_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE2_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE3_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE4_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE5_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE6_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE7_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xE9_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xEA_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xEB_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xEC_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xED_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xEE_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xEF_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF0_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF1_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF2_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF3_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF4_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF5_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF6_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF7_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF8_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xF9_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xFA_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xFB_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xFC_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xFD_t& ) {}
      [[gnu::always_inline]] inline void operator()(const empty0xFE_t& ) {}
      [[gnu::always_inline]] inline void operator()(const error_t& ) {}
   };

}} // namespace eosio::vm