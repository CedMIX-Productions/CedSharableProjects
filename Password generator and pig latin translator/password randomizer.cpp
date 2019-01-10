//include declarations
#include<iostream>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
using namespace std;

//main functions
void main()
{
	//initalize the loop and the -1 sentinel
	int loop = -1;
	const char dash = '-', one = '1';
	string inputKey;
	while (loop!=0)
	{
		//initializes the counterCount variable and allow the user to type the password
		int characterCount = 0;
		cout << "Enter ORIGINAL password (-1 to end): ";
		getline(cin, inputKey);
		characterCount = inputKey.length();
		//if user input is -1
		if (inputKey[0] == dash&&inputKey[1] == one)
		{
			break;
		}
		//vowel replace
		replace(inputKey.begin(), inputKey.end(), 'A', 'X');
		replace(inputKey.begin(), inputKey.end(), 'E', 'X');
		replace(inputKey.begin(), inputKey.end(), 'I', 'X');
		replace(inputKey.begin(), inputKey.end(), 'O', 'X');
		replace(inputKey.begin(), inputKey.end(), 'U', 'X');
		replace(inputKey.begin(), inputKey.end(), 'a', 'x');
		replace(inputKey.begin(), inputKey.end(), 'e', 'x');
		replace(inputKey.begin(), inputKey.end(), 'i', 'x');
		replace(inputKey.begin(), inputKey.end(), 'o', 'x');
		replace(inputKey.begin(), inputKey.end(), 'u', 'x');
		//number replace
		replace(inputKey.begin(), inputKey.end(), '1', 'Z');
		replace(inputKey.begin(), inputKey.end(), '2', 'Z');
		replace(inputKey.begin(), inputKey.end(), '3', 'Z');
		replace(inputKey.begin(), inputKey.end(), '4', 'Z');
		replace(inputKey.begin(), inputKey.end(), '5', 'Z');
		replace(inputKey.begin(), inputKey.end(), '6', 'Z');
		replace(inputKey.begin(), inputKey.end(), '7', 'Z');
		replace(inputKey.begin(), inputKey.end(), '8', 'Z');
		replace(inputKey.begin(), inputKey.end(), '9', 'Z');
		replace(inputKey.begin(), inputKey.end(), '0', 'Z');
		//console output
		reverse(inputKey.begin(), inputKey.end());
		cout << "NEW Password: " << inputKey << endl;
	}
	//message after break
	cout << "To close, click [X] or press any key" << endl;
	_getch();
}