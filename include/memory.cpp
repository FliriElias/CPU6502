#pragma once

#include "memory.h"
#include <typ.cpp>

void Mem::Initialize() {
    for (u32 i = 0; i < MAX_MEM; i++) {
        Data[i] = 0;
    }
}