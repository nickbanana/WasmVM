#ifndef WASMVM_STRUCTURE_DATA
#define WASMVM_STRUCTURE_DATA

#include <stdint.h>
#include <dataTypes/Value.h>
#include <dataTypes/vector.h>

typedef struct _wasm_data {
    uint32_t    data;
    Value       offset;
    vector*     init;       // char
} WasmData;

#endif