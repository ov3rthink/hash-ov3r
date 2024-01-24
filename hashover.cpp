#include <iostream>
#include <string>
#include <cstring>
#include <memory>
#include "/usr/include/termcolor.hpp"
#include "hashanalyzer.hpp"

int main(int argc, char** argv) {
    if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "-version") == 0 || strcmp(argv[1], "--version") == 0) {
        std::cout << termcolor::blue << "¬HASH OVER" << termcolor::reset   << std::endl;
        std::cout << termcolor::blue << "verion : 1.0" << termcolor::reset << std::endl;
    }
    else if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-help") == 0) {
        std::cout << termcolor::on_blue << "exemple of user: hashover 23jk4f0x9if902cf f89fa232" << termcolor::reset << std::endl;
        std::cout << termcolor::blue << "¬ dev : overthink\n¬ repository : https://github.com/ov3rthink/hash-ov3r\nfirst version : 24 jan 2024 " << termcolor::reset << std::endl;
    }
    else {
        for (int i = 1; i < argc; i++) {
            if (strlen(argv[i]) < 8 || strlen(argv[i]) > 512) {
                std::cout << termcolor::on_red << "[!] - argv[" << i << "] : " << argv[i] << " size invalid" << termcolor::reset << std::endl;
                return 1;
            }
        }
    }

    return 0;
}

