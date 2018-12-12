//declaring header files
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

//main function
void main()
{
	//global initialization
	float L = 0;
	float radius = 0;
	float angle = 0;
	float cosineAngle = 0;
	//Length of a chord where radius r and central angle are given
	//enter values
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter angle: ";
	cin >> angle;
	//math engine
	cosineAngle = cos(angle);
	L = radius*(sqrt(2 * (1 - cosineAngle)));
	//result
	cout << "The result is: " << L << endl;
	cout << "Press any key to exit" << endl;
	_getch();
}