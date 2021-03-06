#pragma once
#include <arisen/vm/opcodes_def.hpp>
#include <arisen/vm/variant.hpp>

#include <map>

namespace arisen { namespace vm {
   enum opcodes {
      RSN_VM_CONTROL_FLOW_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_BR_TABLE_OP(RSN_VM_CREATE_ENUM)
      RSN_VM_RETURN_OP(RSN_VM_CREATE_ENUM)
      RSN_VM_CALL_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_CALL_IMM_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_PARAMETRIC_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_VARIABLE_ACCESS_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_MEMORY_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_I32_CONSTANT_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_I64_CONSTANT_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_F32_CONSTANT_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_F64_CONSTANT_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_COMPARISON_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_NUMERIC_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_CONVERSION_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_EXIT_OP(RSN_VM_CREATE_ENUM)
      RSN_VM_EMPTY_OPS(RSN_VM_CREATE_ENUM)
      RSN_VM_ERROR_OPS(RSN_VM_CREATE_ENUM)
   };
   
   struct opcode_utils {
      std::map<uint16_t, std::string> opcode_map{
         RSN_VM_CONTROL_FLOW_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_BR_TABLE_OP(RSN_VM_CREATE_MAP)
         RSN_VM_RETURN_OP(RSN_VM_CREATE_MAP)
         RSN_VM_CALL_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_CALL_IMM_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_PARAMETRIC_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_VARIABLE_ACCESS_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_MEMORY_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_I32_CONSTANT_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_I64_CONSTANT_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_F32_CONSTANT_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_F64_CONSTANT_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_COMPARISON_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_NUMERIC_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_CONVERSION_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_EXIT_OP(RSN_VM_CREATE_MAP)
         RSN_VM_EMPTY_OPS(RSN_VM_CREATE_MAP)
         RSN_VM_ERROR_OPS(RSN_VM_CREATE_MAP)
      };
   }; 

   enum imm_types {
      none,
      block_imm,
      varuint32_imm,
      br_table_imm,
   };


   RSN_VM_CONTROL_FLOW_OPS(RSN_VM_CREATE_CONTROL_FLOW_TYPES)
   RSN_VM_BR_TABLE_OP(RSN_VM_CREATE_BR_TABLE_TYPE)
   RSN_VM_RETURN_OP(RSN_VM_CREATE_CONTROL_FLOW_TYPES)
   RSN_VM_CALL_OPS(RSN_VM_CREATE_CALL_TYPES)
   RSN_VM_CALL_IMM_OPS(RSN_VM_CREATE_CALL_IMM_TYPES)
   RSN_VM_PARAMETRIC_OPS(RSN_VM_CREATE_TYPES)
   RSN_VM_VARIABLE_ACCESS_OPS(RSN_VM_CREATE_VARIABLE_ACCESS_TYPES)
   RSN_VM_MEMORY_OPS(RSN_VM_CREATE_MEMORY_TYPES)
   RSN_VM_I32_CONSTANT_OPS(RSN_VM_CREATE_I32_CONSTANT_TYPE)
   RSN_VM_I64_CONSTANT_OPS(RSN_VM_CREATE_I64_CONSTANT_TYPE)
   RSN_VM_F32_CONSTANT_OPS(RSN_VM_CREATE_F32_CONSTANT_TYPE)
   RSN_VM_F64_CONSTANT_OPS(RSN_VM_CREATE_F64_CONSTANT_TYPE)
   RSN_VM_COMPARISON_OPS(RSN_VM_CREATE_TYPES)
   RSN_VM_NUMERIC_OPS(RSN_VM_CREATE_TYPES)
   RSN_VM_CONVERSION_OPS(RSN_VM_CREATE_TYPES)
   RSN_VM_EXIT_OP(RSN_VM_CREATE_EXIT_TYPE)
   RSN_VM_EMPTY_OPS(RSN_VM_CREATE_TYPES)
   RSN_VM_ERROR_OPS(RSN_VM_CREATE_TYPES)

   using opcode = variant<
      RSN_VM_CONTROL_FLOW_OPS(RSN_VM_IDENTITY)
      RSN_VM_BR_TABLE_OP(RSN_VM_IDENTITY)
      RSN_VM_RETURN_OP(RSN_VM_IDENTITY)
      RSN_VM_CALL_OPS(RSN_VM_IDENTITY)
      RSN_VM_CALL_IMM_OPS(RSN_VM_IDENTITY)
      RSN_VM_PARAMETRIC_OPS(RSN_VM_IDENTITY)
      RSN_VM_VARIABLE_ACCESS_OPS(RSN_VM_IDENTITY)
      RSN_VM_MEMORY_OPS(RSN_VM_IDENTITY)
      RSN_VM_I32_CONSTANT_OPS(RSN_VM_IDENTITY)
      RSN_VM_I64_CONSTANT_OPS(RSN_VM_IDENTITY)
      RSN_VM_F32_CONSTANT_OPS(RSN_VM_IDENTITY)
      RSN_VM_F64_CONSTANT_OPS(RSN_VM_IDENTITY)
      RSN_VM_COMPARISON_OPS(RSN_VM_IDENTITY)
      RSN_VM_NUMERIC_OPS(RSN_VM_IDENTITY)
      RSN_VM_CONVERSION_OPS(RSN_VM_IDENTITY)
      RSN_VM_EXIT_OP(RSN_VM_IDENTITY)
      RSN_VM_EMPTY_OPS(RSN_VM_IDENTITY)
      RSN_VM_ERROR_OPS(RSN_VM_IDENTITY_END)
      >;
}} // namespace arisen::vm
