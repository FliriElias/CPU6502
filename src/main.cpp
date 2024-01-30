#include <cpu.cpp>
#include <memory.cpp>

#include <iostream>
#include <cstdint>


int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;

    Mem mem;
    CPU cpu;
    cpu.Reset( mem );


    return 0;
}