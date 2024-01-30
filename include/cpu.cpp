#pragma once

#include "cpu.h"
#include <memory.cpp>


void CPU::set_PC(Word x) {
    PC = x;
}
void CPU::set_SP(Byte x) {
    SP = x;
}
void CPU::set_A(Byte x) {
    A = x;
}
void CPU::set_X(Byte x) {
    X = x;
}
void CPU::set_Y(Byte x) {
    Y = x;
}
void CPU::set_C(Byte x) {
    C = x;
}
void CPU::set_Z(Byte x) {
    Z = x;
}
void CPU::set_I(Byte x) {
    I = x;
}
void CPU::set_D(Byte x) {
    D = x;
}
void CPU::set_B(Byte x) {
    B = x;
}
void CPU::set_V(Byte x) {
    V = x;
}
void CPU::set_N(Byte x) {
    N = x;
}


Word CPU::get_PC() {
    return PC;
}
Byte CPU::get_SP() {
    return SP;
}
Byte CPU::get_A() {
    return A;
}
Byte CPU::get_X() {
    return X;
}
Byte CPU::get_Y() {
    return Y;
}
Byte CPU::get_C() {
    return C;
}
Byte CPU::get_Z() {
    return Z;
}
Byte CPU::get_I() {
    return I;
}
Byte CPU::get_D() {
    return D;
}
Byte CPU::get_B() {
    return B;
}
Byte CPU::get_V() {
    return V;
}
Byte CPU::get_N() {
    return N;
}



void CPU::Reset( Mem& memory ) {
    set_PC(0xFFFC);
    set_SP((Byte) 0x0100);

    // reset flags + A, X, Y
    set_A(0);
    set_X(0);
    set_Y(0);
    set_C(0);
    set_Z(0);
    set_I(0);
    set_D(0);
    set_B(0);
    set_V(0);
    set_N(0);

    memory.Initialize();
}