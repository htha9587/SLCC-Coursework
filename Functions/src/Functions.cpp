//============================================================================
// Name        : Functions.cpp
// Author      : htha9587
// Version     : 0.1
// Copyright   : Your copyright notice.
// Description : Functions-implementation.
//============================================================================

#include <iostream>

using namespace std;

//function prototypes - interfaces.
int averageFive(int, int, int, int , int);
double averageFive(double, double, double, double, double);

int main()
{
	cout << "Average 5 numbers" << endl;

	cout << "Average of 5 integers: "
			<< averageFive(1, 2, 3, 4, 5) << endl;

	cout << "Average of 5 doubles: "
			<< averageFive(1.2, 2.3, 3.4, 4.5, 5.6) << endl;

	return 0;
}

//Function implementation.
int averageFive(int a, int b, int c, int d, int e)
{
	return (a+b+c+d+e) / 5;
}

double averageFive(double a, double b, double c, double d, double e)
{
	return (a+b+c+d+e) / 5;
}

