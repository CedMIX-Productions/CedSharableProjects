//declaring header files
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

//main function
void main()
{
	//global initialization
	float A = 0;
	float PI = 3.1416;
	float r1 = 0;
	float r2 = 0;
	//Area of annilus region
	cout << "Enter value for r1: ";
	cin >> r1;
	cout << "Enter value for r2: ";
	cin >> r2;
	//math engine
	A = PI*(pow(r2, 2) - pow(r1, 2));
	//result
	cout << "The result is " << A << endl;
	cout << "Press any key to exit" << endl;
	_getch();
}