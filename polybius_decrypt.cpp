#include <iostream>

using namespace std;

int main() {

	char key[6][5] = {	'a','b','c','d','e',
						'f','g','h','i','j',
						'k','l','m','n','o',
						'p','q','r','s','t',
						'u','v','w','x','y',
						'z', 0 , 0 , 0 , 0 };

	int i = 0;
	int line = 0;
	int column = 0;
	int index = 0;
	char decrypted_result[1000] = { 0 };
	char input[1000] = { 0 };
	
	cout << endl;
	
	cout << R"( ____       _       _     _             ____                             _            )" << endl;
	cout << R"(|  _ \ ___ | |_   _| |__ (_)_   _ ___  |  _ \  ___  ___ _ __ _   _ _ __ | |_ ___ _ __ )" << endl;
	cout << R"(| |_) / _ \| | | | | '_ \| | | | / __| | | | |/ _ \/ __| '__| | | | '_ \| __/ _ \ '__|)" << endl;
	cout << R"(|  __/ (_) | | |_| | |_) | | |_| \__ \ | |_| |  __/ (__| |  | |_| | |_) | ||  __/ |   )" << endl;
	cout << R"(|_|   \___/|_|\__, |_.__/|_|\__,_|___/ |____/ \___|\___|_|   \__, | .__/ \__\___|_|   )" << endl;
	cout << R"(              |___/                                          |___/|_|                 )" << endl;
	
	cout << endl << endl << R"(Author : smh67dmrc | https://smh67dmrc.github.io/)" << endl << endl;
	cout << "---------------------------------------------------------------------------------------" << endl << endl;

	cout << "Plaintext(JUST NUMBERS and MAX=1000) : ";

	gets(input);

	while (input[i] != '\0')
	{
		char char_a = input[i];
		line = char_a - '0';
		char char_b = input[i + 1];
		column = char_b - '0';
		decrypted_result[index] = key[line-1][column-1];
		i += 2;
		index++;
	}
	
	cout << "\nDecrypted : " << decrypted_result << endl;

	return 0;
}