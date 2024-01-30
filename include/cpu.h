#pragma once

#include <typ.cpp>
#include <memory.cpp>
#include <cstdint>



class CPU {
    private:
    Word PC; // Programm Counter
    Byte SP; // Stack Pointer

    Byte A, X, Y; // Registers

    // status flags
    Byte C : 1;
    Byte Z : 1;
    Byte I : 1;
    Byte D : 1;
    Byte B : 1;
    Byte V : 1;
    Byte N : 1;


    public:
    
    void set_PC(Word x);
    void set_SP(Byte x);
    void set_A(Byte x);
    void set_X(Byte x);
    void set_Y(Byte x);
    void set_C(Byte x);
    void set_Z(Byte x);
    void set_I(Byte x);
    void set_D(Byte x);
    void set_B(Byte x);
    void set_V(Byte x);
    void set_N(Byte x);

    Word get_PC();
    Byte get_SP();
    Byte get_A();
    Byte get_X();
    Byte get_Y();
    Byte get_C();
    Byte get_Z();
    Byte get_I();
    Byte get_D();
    Byte get_B();
    Byte get_V();
    Byte get_N();

    void Reset( Mem& memory );
};