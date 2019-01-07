//Produced by (c) CedMIX Productions 2019
//include declarations
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

//main function
void main()
{
	//initialize variables
	string digitCode;
	int loop = -1;
	while (loop!=0)
	{
		//initialize variables inside the loop
		int x, y = 0;
		const char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9', zero = '0';
		const char hyphen = '-';
		long numChars = 0;
		long charLimit = 5;
		cout << "Enter 5 digit zip code (-1 to end): ";
		getline(cin, digitCode);
		numChars = digitCode.length();
		//break statement if the variable digitCode is 0
		if (digitCode[0] == hyphen && digitCode[1] == one)
		{
			loop = 0;
			break;
		}
		//checks if it passes the five character limit
		if (numChars == charLimit)
		{
			cout << "Sufficient Length" << endl;
			//this for loop is responsible for the checking each digit in an array whether is a number or not
			for (x = 0; x < 5; x++)
			{
				//if this is a number, it adds +1 to value y
				if (digitCode[x] == one || digitCode[x] == two || digitCode[x] == three || digitCode[x] == four || digitCode[x] == five || digitCode[x] == six || digitCode[x] == seven || digitCode[x] == eight || digitCode[x] == nine || digitCode[x] == zero)
				{
					y = y + 1;
				}
				//otherwise it will stay the same
				else
				{
					y = y;
				}
			}
			//This if, else-if statement is responsible whether the counter passes 5
			if (y < 5)
			{
				cout << "Not all numbers" << endl;
			}
			else if (y = 5)
			{
				cout << "All numbers" << endl;
			}
		}
		else
		{
			cout << "Insufficient Length" << endl;
		}
	}
	cout << " " << endl;
	cout << "To close, click [X], or press any key to exit" << endl;
	_getch();
}
