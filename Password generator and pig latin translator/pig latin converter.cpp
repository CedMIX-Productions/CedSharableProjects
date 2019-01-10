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
	string pigLatinInput;
	string beginReversal;
	string endReversal;
	const char Ay = 'A', Eh = 'E', Ie = 'I', Oh = 'O', Uh = 'U', waY = 'Y';
	const char aY = 'a', eH = 'E', iE = 'i', oH = 'o', uH = 'u', WAy = 'y';
	const char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9', zero = '0';
	long indexVowelLocation = 0;
	long loop = -1;
	while (loop != 0)
	{
		pigLatinInput = " ";
		//enter a word (-1 to end):
		cout << "Enter-way a-way ord-way (-1 o-tay end-way): ";
		getline(cin, pigLatinInput);
		//if you typed -1 as sentinel/quit from loop
		if (pigLatinInput[0] == '-'&&pigLatinInput[1] == '1')
		{
			break;
		}
		//if the first charcter is a vowel
		if (pigLatinInput[0] == Ay || pigLatinInput[0] == Eh || pigLatinInput[0] == Ie || pigLatinInput[0] == Oh || pigLatinInput[0] == Uh || pigLatinInput[0] == waY ||
			pigLatinInput[0] == aY || pigLatinInput[0] == eH || pigLatinInput[0] == eH || pigLatinInput[0] == oH || pigLatinInput[0] == uH || pigLatinInput[0] == WAy)
		{
			cout << pigLatinInput << "-way" << endl;
		}
		//if the first character is a number
		else if (pigLatinInput[0] == one || pigLatinInput[0] == two || pigLatinInput[0] == three || pigLatinInput[0] == four || pigLatinInput[0] == five || pigLatinInput[0] == six ||
			pigLatinInput[0] == seven || pigLatinInput[0] == eight || pigLatinInput[0] == nine || pigLatinInput[0] == zero)
		{
			cout << pigLatinInput << "-way" << endl;
		}
		//When the first character is not a vowel, move the first character to the end of the word until
		//it reaches a valid vowel, then adds the "ay" word to the end of the word
		else if (indexVowelLocation = pigLatinInput.find_first_of("aeiouyAEIOUY", 0) != 0)
		{
			indexVowelLocation = pigLatinInput.find_first_of("aeiouyAEIOUY", 0);
			beginReversal = pigLatinInput.substr(0, indexVowelLocation);
			endReversal = pigLatinInput.substr(indexVowelLocation);
			cout << endReversal << "-" << beginReversal << "ay" << endl;
		}
	}
	//To close, click [X] or press any key to exit.
	cout << "o-Tay ose-clay, ick-clay [X] or-way ess-pray any-way ey-kay." << endl;
	_getch();
}
