#ifndef WASMVM_STRUCTURE_INSTR_PARAMETRIC
#define WASMVM_STRUCTURE_INSTR_PARAMETRIC

#include <structures/instrs/WasmInstr.h>

typedef struct _wasm_parametric_instr {
    WasmInstr parent;
} WasmParametricInstr;

#endif