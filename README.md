# MOS6502 Emulator in C++

#### by, Fliri Elias

![MOS6502](https://i.imgur.com/1HhYPT9.jpg)

## Overview

This project is a C++ implementation of an emulator for the MOS Technology 6502 microprocessor. The MOS6502 is a popular 8-bit microprocessor that was widely used in the late 1970s and 1980s, powering iconic computers such as the Commodore 64, Apple II, and Atari 2600.

The goal of this emulator is to provide a flexible and efficient platform for emulating programs and systems that run on the MOS6502 architecture. Whether you're interested in retro computing, game development, or exploring the history of microprocessors, this project aims to deliver an accurate and accessible emulation environment.

## Features

- **Full 6502 Instruction Set:** The emulator supports the entire instruction set of the MOS6502, allowing you to run programs written for this architecture.

- **Memory Management:** Emulated memory is managed, and you can load ROMs and interact with memory as if you were working with a real MOS6502 system.

- **Debugging Tools:** The emulator includes basic debugging tools, such as a disassembler and a simple interactive debugger, to aid in the analysis and understanding of executed code.

- **Configurable:** The emulator is designed to be configurable and extensible. You can easily integrate it into your projects or use it as a foundation for building more complex systems.

## Getting Started

 - **Clone the Repository:**
   ```bash
   git clone https://github.com/FliriElias/CPU6502.git


 -  **Build the Emulator:**
    
    bashCopy code
    
	Run code in cmd where the **CMakeLists.txt** file is located

    `mkdir build && cmake -S . -B build/` 

 - **Compile Code:**

	bashCopy code
    
	Run code in cmd path:  `${CurrentWorkingDir}/build`

	`cmake --build build`
	
    
 -  **Run an Example:**
    
    bashCopy code

 - `cd build/Debug`

 - `.\CPU6502.exe` 
    

## Usage

The emulator is a command-line application. To run a MOS6502 program, pass the path to the ROM file as a command-line argument.

bashCopy code

`.\CPU6502.exe path/to/your/rom.bin` 

## Contributing

Contributions are welcome! If you have ideas for improvements, bug fixes, or new features, please feel free to open an issue or submit a pull request.

Before contributing, please review the contribution guidelines.

## License

This project is licensed under the GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007  - see the LICENSE file for details.

## Acknowledgments

-   Special thanks to the MOS Technology team for creating the 6502 microprocessor and its architecture.
-   Inspiration and insights from various emulator projects that paved the way for this implementation.

Happy coding and happy emulating!