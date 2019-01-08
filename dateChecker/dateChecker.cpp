//Produced by (c) CedMIX Productions 2019
//include declarations
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

//main function
void main()
{
	//initialize variables before the loop
	string dateValue;
	const char dash = '-';
	const char one = '1';
	const char forwardSlash = '/';
	int loop = -1;
	while (loop != 0)
	{
		//initialize variables during the loop operation
		int x = 0;
		int invChar = 0;
		int validChar = 0;
		const long stringLengthLimit = 9;
		unsigned long stringdatelength = 0;
		const char lolz30th = '3';
		const char lolz31st = '1';
		const char otherMonth1x = '1';
		const char decemberLimit = '2';
		long monthError = 0, dateError = 0, dateMonthError = 0;
		//user input
		cout << "Enter date (mm/dd/yy) (Enter -1 to end): ";
		getline(cin, dateValue);
		//if -1 is typed
		if (dateValue[0] == dash&&dateValue[1] == one)
		{
			break;
		}
		stringdatelength = dateValue.length();
		//if it had all 8 characters (mm/dd/yy)
		if (stringdatelength = stringLengthLimit)
		{
			//if the located indeces are forward slashes
			if (dateValue[2] != forwardSlash&&dateValue[5] != forwardSlash)
			{
				cout << "Invalid third and sixth character" << endl;
			}
			else if (dateValue[2] != forwardSlash)
			{
				cout << "Invalid third character" << endl;
			}
			else if (dateValue[5] != forwardSlash)
			{
				cout << "Invalid sixth character" << endl;
			}
			//checks for a valid month and date format
			if ((dateValue[0]>otherMonth1x || dateValue[1] >decemberLimit) && (dateValue[3] >= lolz30th &&dateValue[4] > lolz31st))
			{
				cout << "Invalid month and date range" << endl;
				dateMonthError++;
			}
			else if (dateValue[0]>otherMonth1x || dateValue[1] >decemberLimit)
			{
				cout << "Invaid month range" << endl;
				monthError++;
			}
			else if (dateValue[3] >= lolz30th &&dateValue[4] > lolz31st)
			{
				cout << "Invalid date range" << endl;
				dateError++;
			}
			//outputs the date with the 20xx
			if (dateValue[2] == forwardSlash&&dateValue[5] == forwardSlash&&monthError!=1&&dateError!=1&&dateMonthError!=1)
			{
				dateValue.insert(6, "20");
				cout << dateValue << endl;
			}
		}
	}
	//message when quits
	cout << "To quit, click close [X] or press any key to exit" << endl;
	_getch();
}
