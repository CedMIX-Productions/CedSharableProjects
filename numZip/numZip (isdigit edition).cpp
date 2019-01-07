//Produced by (c) CedMIX Productions 2019
//include declarations
#include<iostream>
#include<string>
#include<conio.h>
#include<ctype.h>
using namespace std;

//main function
void main()
{
	//initialize variables
	string numZip;
	long loop = 0;
	unsigned const long charLimit = 5;
	long numChars = 0;
	long charisNum = 0;
	long x = 0;
	const char hyphen = '-';
	const char one = '1';
	//loop that never exits
	while (loop != -1)
	{
		//enter 5 digit zip code
		cout << "Five-character ZIP code (-1 to end): ";
		getline(cin, numZip);
		//cin >> numZip;
		//cout << numZip.length() << endl;
		numChars = numZip.length();

		//break statement if the variable numZip is 0
		if (numZip[0] == hyphen && numZip[1] == one)
		{
			loop = 0;
			break;
		}
		//if the number of characters reaches 5
		if (numChars == charLimit)
		{
			cout << "Valid length" << endl;
			//checks whether the string is a digit or not
			if (isdigit(numZip[0]) && isdigit(numZip[1]) && isdigit(numZip[2]) && isdigit(numZip[3]) && isdigit(numZip[4]))
			{
				cout << "All numbers" << endl;
			}
			else
			{
				cout << "Not all numbers" << endl;
			}
		}
		//else if the number of characters is lower or higher than 5
		else
		{
			cout << "Invalid Length" << endl;
		}
			}
	cout << " " << endl;
	cout << "To close, click [X] or press any key" << endl;
	_getch();
}
