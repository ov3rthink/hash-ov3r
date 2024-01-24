#include <iostream>
#include <string>
#include <string.h>
#include <termcolor.hpp>



int main(int argc, char** argv) {
	if (strcmp(argv[1], "-v") && strcmp(argv[1], "-version") && strcmp(argv[1], "--version")){
		std::cout << termcolor::blue << "¬HASH OVER" << termcolor::reset   << std::endl;
		std::cout << termcolor::blue << "verion : 1.0" << termcolor::reset << std::endl;
	} else if (strcmp(argv[1], "--help") && strcmp(argv[1], "-h") && strcmp(argv[1], "-help")){
		std::cout << termcolor::on_blue << "exemple of user: hashover 23jk4f0x9if902cf f89fa232" << termcolor::reset << std::endl;
		std::cout << termcolor::blue << "¬ dev : overthink\n¬ repository : https://github.com/ov3rthink/hash-ov3r\nfirst version : 24 jan 2024 " << termcolor::reset << std::endl;
	}

	else {
		



	}


	return 0;
}

