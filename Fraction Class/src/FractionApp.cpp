/*
 * FractionApp.cpp
 *
 *  Created on: November 8, 2016
 *      Author: htha9587
 */

#include <iostream>
#include "Fraction.h"

using namespace std;


int main()
{
Fraction f1(1,2);
Fraction f2(2,3);

cout << "This is my numerator = " << f1.getNum() << endl;
cout << "Adding f1 and f2, my numerator should be 7!" " = " << (f1 + f2).getNum() << endl;
cout << "Subtracting f1 and f2 my numerator should be " << (f1 - f2).getNum() << endl;
cout << "Multiplying f1 and f2 my numerator should be " << (f1 * f2).getNum() << endl;
cout << "Dividing f1 and f2 my numerator should be " << (f1 / f2).getNum() << endl;
cout << "The << operator should be " << f2.getNum() << f2.getDen() << endl;
cout << "The >> operator should be " << f2.getNum() << f2.getDen() << endl;

return 0;
}
