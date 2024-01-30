#pragma once

#include <typ.cpp>

class Mem {
    private:
    static constexpr u32 Mem::MAX_MEM = 1024 * 64;
    Byte Data[MAX_MEM];

    public:

    void Initialize();
};