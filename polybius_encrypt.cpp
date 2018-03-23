#include <iostream>

using namespace std;

int main(){
	
	char key[6][5] = {'a','b','c','d','e',
					  'f','g','h','i','j',
					  'k','l','m','n','o',
					  'p','q','r','s','t',
					  'u','v','w','x','y',
					  'z', 0 , 0 , 0 , 0};
					  
	int i = 0;
	int encrypted[1000] = {0};
	int index = 0;
	bool control = 0;
	char input[1000];
	
	cout << endl;
	
	cout << R"( ____       _       _     _             _____                             _            )" << endl;
	cout << R"(|  _ \ ___ | |_   _| |__ (_)_   _ ___  | ____|_ __   ___ _ __ _   _ _ __ | |_ ___ _ __ )" << endl;
	cout << R"(| |_) / _ \| | | | | '_ \| | | | / __| |  _| | '_ \ / __| '__| | | | '_ \| __/ _ \ '__|)" << endl;
	cout << R"(|  __/ (_) | | |_| | |_) | | |_| \__ \ | |___| | | | (__| |  | |_| | |_) | ||  __/ |   )" << endl;
	cout << R"(|_|   \___/|_|\__, |_.__/|_|\__,_|___/ |_____|_| |_|\___|_|   \__, | .__/ \__\___|_|   )" << endl;
	cout << R"(              |___/                                           |___/|_|                 )" << endl;
	
	cout << endl << endl << R"(Author : smh67dmrc | https://smh67dmrc.github.io/)" << endl << endl;
	cout << "---------------------------------------------------------------------------------------" << endl << endl;
	
	cout << "Plaintext(JUST LOWERCASE and MAX=1000 Character) : ";
	
	gets(input);
		
	while(input[i] != '\0')
	{
		for (int line = 0; line<6; line++)
		{
			if(control == 1){break;}
			
			for (int column = 0; column<5; column++)
			{
				if(input[i] == key[line][column])
				{
					encrypted[index] = line+1;
					encrypted[index+1] = column+1;
					index += 2;
					control = 1;
					break;
				}
			}
		}
		i++;
		control = 0;
	}
	
	i = 0;
	
	cout << "\nEncrypted : ";
	
	while(encrypted[i] != '\0')
	{
		cout << encrypted[i];
		i++;
	}
	
	cout << endl;
	
	return 0;
}