#include <iostream>
#include <cstring>
#include <termcolor.hpp>
#include "hashanalyzer.hpp"

int main(int argc, char** argv) {
    // args extras
    if (std::strcmp(argv[1], "-v") == 0 || std::strcmp(argv[1], "-version") == 0 || std::strcmp(argv[1], "--version") == 0) {
        std::cout << termcolor::blue << "¬HASH OVER" << termcolor::reset   << std::endl;
        std::cout << termcolor::blue << "version : 1.0" << termcolor::reset << std::endl;
    }
    else if (std::strcmp(argv[1], "--help") == 0 || std::strcmp(argv[1], "-h") == 0 || std::strcmp(argv[1], "-help") == 0) {
        std::cout << termcolor::on_blue << "example : hashover 23jk4f0x9if902cf f89fa232" << termcolor::reset << std::endl;
        std::cout << termcolor::blue << "¬ dev : overthink\n¬ repository : https://github.com/ov3rthink/hash-ov3r\nfirst version : 24 jan 2024 " << termcolor::reset << std::endl;
    }

    // main
    else {
        for (int i = 1; i < argc; i++) {
            if (std::strlen(argv[i]) < 8 || std::strlen(argv[i]) > 512) {
                std::cout << termcolor::on_red << "[!] - argument[" << i << "] : " << argv[i] << " size invalid!!" << termcolor::reset << std::endl;
                return 1;
            }
        }

        Hash* HashArg = new Hash[argc-1];
        for (int i = 1; i < argc; ++i) {
            HashArg[i-1].SetHashProperties(argv[i]);
        }

        delete[] HashArg;
    }

    return 0;
}
