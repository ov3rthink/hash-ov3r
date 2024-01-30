#include <iostream>
#include <string>
#include <cctype>
#include <unordered_set>
#include <termcolor.hpp>

void HashWarning(void){
	std::cout << termcolor::on_red << "¬ Unidentified hash " << termcolor::reset << std::endl;
}

void OutputProgram(std::string PossibleHashs){
	std::cout << termcolor::on_red << " ¬ " << PossibleHashs << termcolor::reset << std::endl;
}

void Hash(const std::string& str) {

	bool UseSpecialChar = false;
	bool UseLetter = false;
	bool UseNumbers = false;

	for (char character : str ) {
		if (std::isalpha(character)) {
            		UseLetter = true;
		} else if (std::isdigit(character)) {
			UseNumbers = true;
		} else if (!std::isalnum(character)) {
			UseSpecialChar = true;
        	} else {
			HashWarning();
		}
	}


	std::unordered_set<int> allowedSizes = {4, 8, 13, 16, 32, 34, 37, 48, 49, 50, 52, 56, 57, 58, 68, 118, 119};

	if ( allowedSizes.find(str.size()) != allowedSizes.end() and (UseLetter == false and UseNumbers == false)){
		HashWarning();
	}

	else { 
			if (str.size() == 4 ){
				OutputProgram("[+] LoseLose | CRC-8");
			}

			else if(str.size() == 8 ){
				if ( UseSpecialChar ){ 
					OutputProgram (" CRC-32 | ADLER-32, CRC-32B | XOR-32 | GHas-32-3 | GHash-32-5" );
				} else {
					HashWarning();
				}
			}

			else if(str.size() == 13) {
				if ( UseSpecialChar ){
					OutputProgram("DES(unix)");
				} else {
					HashWarning();
                                }

			}

			else if (str.size() == 16 ){
				OutputProgram(" MD5(Half) | MD5(Middle) | MySQL");
			}

			else if (str.size() == 32){
				OutputProgram(" Haval-128 | MD2 |  MD4 |  MD5 | NTLM |  RAdmin v2.x |  RipeMD-128 |  SNEFRU-128 |  Tiger-128 ");
			}

			else if (str.size() == 34 ){
				if ( UseSpecialChar ){
					OutputProgram(" MD5 |  Lineage II C4");
				}
			}

			else if (str.size() == 37){
				if ( UseSpecialChar ){
					OutputProgram(" MD5 ");
				}
			}

			else if (str.size() == 40){
				OutputProgram(" Haval-160, MySQL5 | MySQL5 - SHA-1 | MySQL 160bit | RipeMD-160 | Tiger-160");			
			}

			else if (str.size() == 48) {
				OutputProgram(" Haval-160 | Tiger-192 ");
				
			}

			else if (str.size() == 49){
				if ( UseSpecialChar ){
					OutputProgram(" MD5 | Joomla ");
				}else {
					HashWarning();
				}
			}

			else if (str.size() == 52){
				OutputProgram(" SHA-1 ");
			}

			else if (str.size() == 56){
				if ( UseSpecialChar ){
					OutputProgram("  Haval-224 | SHA-224 | Haval-256 | GOST R 34.11-94 | RipeMD-256 | SNEFRU-256 | SHA-256");
				} 
			}

			else if (str.size() == 57){
				if ( UseSpecialChar ) {
					OutputProgram(" MD5 | Joomla ");
				} else {
					HashWarning();
				}
			}

			else if (str.size() == 58){
				OutputProgram(" SHA-256 ");
			}

			else if (str.size() == 65){
				OutputProgram(" SAM ");
			}

			else if(str.size() == 118){
				OutputProgram(" RideMD-320 ");
			}

			else if(str.size() == 119){
				if (UseSpecialChar ) {
					OutputProgram(" Sha-384 ");
				} else {
					HashWarning();
				}
			}
		}

}
