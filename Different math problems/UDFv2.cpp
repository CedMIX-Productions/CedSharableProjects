//for visual studio 2010 and above only
//declare cpp library
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

int dataX,dataY;
char option='A';

int asterisk()
{
	cout<<"********************************************************"<<endl;
	return 0;
}

//udf for Area of annilus region
float annilusRegion(float dataX, float dataY)
{
	//initialize values
	double A = 0;
	const double PI = 3.1416;
	double r1 = 0;
	double r2 = 0;
	//input for r1 and r2
	cout << "Enter value for r1: ";
	cin >> r1;
	cout << "Enter value for r2: ";
	cin >> r2;
	switch (r2>r1)
	{
	case 1: A = PI*(pow(r2, 2) - pow(r1, 2));
			cout<<"The area of the annilus region is "<<A<<endl;
			break;
	default: cout<<"Error: The value of r1 is lower than r2"<<endl;
			break;
	}
	cout<<"Press any key to go back to main menu"<<endl;
	_getch();
	system("cls");
	return 0;
}
//udf for radius of a circle inscribed in a triangle
float radiusCircleTrangle()
{
	//initialize variables
	double r = 0;
	double a = 0, b = 0, c = 0;
	double S = 0;
	//enter values for a, b, c
	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
	cout << "Enter value for c: ";
	cin >> c;
	//solve for s and r
	S = (a + b + c) / 2;
	r = sqrt((S - a)*(S - b)*(S - c) / S);
	cout << setprecision(4) << fixed;
	cout << "The radius of the circle inscribed in a triangle is: " << r << endl;
	cout<<"Press any key to go back to main menu"<<endl;
	_getch();
	system("cls");
	return 0;
}
//udf for length of a chord, where radius r & central angle are given
float lengthChord()
{
	//initialize variables
	double L = 0;
	double radius = 0;
	double angle = 0;
	double degree = 0;
	const double PI= 3.1416;
	//input for radius and angle
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter angle: ";
	cin >> angle;
	//solve for length
	L = radius*(sqrt(2 * (1 - cos(angle*(PI /180)))));
	cout << setprecision(3) << fixed;
	cout << "The length of a chord, where radius r and central angle are given is:  " << L << endl;
	cout<<"Press any key to go back to main menu"<<endl;
	_getch();
	system("cls");
	return 0;
}
//main function
void main()
{
	while(option!='D')
	{
	//menu function
	system("cls");
	asterisk();
	cout<<"Main menu:"<<endl;
	cout<<"Please select the option that you want in the corresponding braces []"<<endl;
	cout<<"\n";
	cout<<"[A] Solve for area of annulus region"<<endl;
	cout<<"[B] Solve for radius of a circle inscribed in a triangle"<<endl;
	cout<<"[C] Solve for length of a chord, where r and central angle are given"<<endl;
	cout<<"[D] Exit"<<endl;
	cout<<"\n";
	asterisk();
	cout<<"Enter option: ";
	cin>>option;
	option=toupper(option);
	system("cls");
	switch(option)
		{
			case 'A':option=annilusRegion(dataX, dataY);
			break;
			case 'B':option=radiusCircleTrangle();
			break;
			case 'C':option=lengthChord();
			break;
			case 'D':;
			break;
			default: cout<<"Error: Choice not found"<<endl;
			break;
		}
	}
	cout<<"To close: click [X] or press any key to exit"<<endl;
	_getch();
}
