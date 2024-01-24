#include <iostream>
#include <string>
#include <termcolor>

struct HashProperties {
    std::string outputHash;
    bool numeric;
    bool useLetter;
    bool letterLowercase;
    bool letterUppercase;
    bool specialChar;
};


int main(int argc, char** argv) {
    HashProperties hashProperties;
    hashProperties.outputHash = argv[1];

    if (hashProperties.outputHash.size() < 8 || hashProperties.outputHash.size() > 512) {
        std::cout << termcolor::on_red << "[!] - Size not listed." << termcolor::reset << std::endl;
        return 1;
    }

    for (char character : hashProperties.outputHash) {
        if (isalpha(character)) {
            hashProperties.useLetter = true;

            if (isupper(character)) {
                hashProperties.letterUppercase = true;
            } 

	    else {
                hashProperties.letterLowercase = true;
            }
        } 
	else if (isdigit(character)) {
            hashProperties.numeric = true;
        }
       	else if (!isalnum(character)) {
            hashProperties.specialChar = true;
        }
    }

    switch (hashProperties.outputHash.size()) {
        case 8:
		std::system("clear");
		std::cout << termcolor::on_red << "[+] argv[1] ¬ " <<  hashProperties.outputHash << termcolor::reset :: std::endl;
		
		
		std::cout << "Hash Properties:" << std::endl;
    		std::cout << "Numeric: " << std::boolalpha << hashProperties.numeric << std::endl;
    		std::cout << "Use Letter: " << std::boolalpha << hashProperties.useLetter << std::endl;
		std::cout << "Lowercase Letter: " << std::boolalpha << hashProperties.letterLowercase << std::endl;
    		std::cout << "Uppercase Letter: " << std::boolalpha << hashProperties.letterUppercase << std::endl;
    		std::cout << "Special Character: " << std::boolalpha << hashProperties.specialChar << std::endl;

            break;

        case 16:
            break;

	case 32 : 
	    break;

	case 64:
	    break;

	case 128:
	    break;

	case 156:
	    break;

	case 256:
	    break;

	case 512:
	    break;

        default:
            break;
    }


    return 0;
}

