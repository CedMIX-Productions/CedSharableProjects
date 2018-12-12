//declaring header files
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

//main function
void main()
{
	//global initialization
	float r = 0;
	float a = 0, b = 0, c = 0;
	float S = 0;
	//Radius of the circle inscribed in a triangle
	//enter values
	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
	cout << "Enter value for c: ";
	cin >> c;
	//solve for s
	S = (a + b + c) / 2;
	cout << "debug: answer for s " << S << endl;
	//solve for r
	r = sqrt((S - a)*(S - b)*(S - c) / S);
	//result
	cout << "The result is " << r << endl;
	cout << "Press any key to exit";
	_getch();
}