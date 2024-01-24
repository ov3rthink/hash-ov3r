#include <iostream>
#include <string>
#include <termcolor>
#include <cctypes>

class Hash {
	public :
		void setHashProperties(char **);

	        std::string hash;
	        bool numeric;
        	bool useLetter;
	        bool letterLowercase;
	        bool letterUppercase;
	        bool specialChar;
};


void Hash::SetHashProperties(char ** StringHash){
	hash = StringHash; 
	for (char character : hash){
		if (isalpha(character)) {
                	useLetter = true;
			if (isupper(character)) {
                	        letterUppercase = true;
        	        }else {
                        	letterLowercase = true;
			}

                } else if (isdigit(character)) {
                    numeric = true;
                } else if (!isalnum(character)) {
                    specialChar = true;
                }

	}
}

