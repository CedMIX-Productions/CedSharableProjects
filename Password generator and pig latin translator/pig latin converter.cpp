//Thanks for Vince for providing the fixed up code for pig-latin
//include declarations
#include<iostream>
#include<string>
#include<conio.h>
#include<ctype.h>
#include<cctype>
using namespace std;

//main function
void main()
{
	//initialize strings input, first, last and integer vowelLocation
	string input = "";
	string first = "";
	string last = "";
	int vowelLocation = 0;
	while (input != "1")
	{
		//enter a word (-1 to end): 
		cout << "Enter-way a-way ord-way (-1 o-tay end-way): ";
		getline(cin, input);
		//if you typed -1 as sentinel/quit from loop
		if (input[0] == '-'&&input[1] == '1')
		{
			break;
		}
		//if the first letter is a vowel
		if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u' || input[0] == 'y' ||
			input[0] == 'A' || input[0] == 'E' || input[0] == 'I' || input[0] == 'O' || input[0] == 'U' || input[0] == 'Y')
		{
			input += "-way";
			cout << input << endl << endl;
		}
		//if the first character is a number
		else if (isdigit(input[0]))
		{
			input += "-way";
			cout << input << endl << endl;
		}
		//When the first character is not a vowel, move the first character to the end of the word until
		//it reaches a valid vowel, then adds the "ay" word to the end of the word
		else if (vowelLocation = input.find_first_of("aeiouyAEIOUY", 0) != 0)
		{
			vowelLocation = input.find_first_of("aeiouyAEIOUY", 0);
			first = input.substr(0, vowelLocation);
			last = input.substr(vowelLocation);
			cout << last + "-" << first << "ay" << endl << endl;
		}
	}
	//To close, click [X] or press any key to exit.
	cout << "o-Tay ose-clay, ick-clay [X] or-way ess-pray any-way ey-kay." << endl;
	_getch();
}
