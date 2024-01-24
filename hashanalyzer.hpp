#include <iostream>
#include <string>
#include <cctype>
#include <termcolor.hpp>



class Hash {
public:
    void SetHashProperties(const std::string& str);

    std::string hash;
    bool numeric;
    bool useLetter;
    bool letterLowercase;
    bool letterUppercase;
    bool specialChar;
};

void Hash::SetHashProperties(const std::string& str) {
    hash = str;
    numeric = false;
    useLetter = false;
    letterLowercase = false;
    letterUppercase = false;
    specialChar = false;

    for (char character : hash) {
        if (std::isalpha(character)) {
            useLetter = true;
            if (std::isupper(character)) {
                letterUppercase = true;
            } else {
                letterLowercase = true;
            }
        } else if (std::isdigit(character)) {
            numeric = true;
        } else if (!std::isalnum(character)) {
            specialChar = true;
        }
    }
}
