#include <iostream>
#include <cstring>
#include <termcolor.hpp>
#include "hashanalyzer.hpp"

using namespace termcolor;

int main(int argc, char** argv) {
    // args extras
    if (std::strcmp(argv[1], "-v") == 0 or std::strcmp(argv[1], "-version") == 0 or std::strcmp(argv[1], "--version") == 0) {
        std::cout << termcolor::blue << "¬HASH lyz" << termcolor::reset   << std::endl;
        std::cout << termcolor::blue << "version : 1.0" << termcolor::reset << std::endl;
    }
    else if (std::strcmp(argv[1], "--help") == 0 or std::strcmp(argv[1], "-h") == 0 or std::strcmp(argv[1], "-help") == 0) {
        std::cout << termcolor::on_blue << "¬ ! hash lyz is a tool for analyzing hash algorithm outputs and made in open source C++." << termcolor::reset << std::endl;
	std::cout << termcolor::blue << "-version -v --version ¬ display the current version of your hash analyzer." << termcolor::reset << std::endl;
        std::cout << termcolor::blue << "¬ dev : ov3rthink\n¬ repository : https://github.com/ov3rthink/hash-ov3r\nfirst version : 24 jan 2024 " << termcolor::reset << std::endl;
    }

    // main
    else {
        for (int i = 1; i < argc; i++) {
            if (std::strlen(argv[i]) < 4 or std::strlen(argv[i]) > 512) {
                std::cout << termcolor::on_red << "[!] - argument[" << i << "] : " << argv[i] << " size invalid!!" << termcolor::reset << std::endl;
                return 1;
            }
        }

        for (int i = 0; i < argc-1; i++ ) {
		std::cout << termcolor::on_red << "[+]-" << i << " " << argv[i] << termcolor::reset << std::endl;
		Hash(argv[i]);
	}
    }

    return 0;
}
