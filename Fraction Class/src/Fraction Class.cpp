//============================================================================
// Name        : Fraction Class.cpp
// Author      : htha9587
// Version     : 0.1.
// Copyright   : Your copyright notice.
// Description : Stores numerator and denominator of a fraction.
//============================================================================

#include "Fraction.h"
#include <iostream>
using namespace std;


Fraction::Fraction(int n, int d)
{
Num = n;
Denom = d;

if( d == 0 )
cout << "I cannot accept a 0 denominator value.";
}

int Fraction::getNum() const
{
return Num;
}

int Fraction::getDen() const
{
	return Denom;
}

Fraction Fraction::operator+(const Fraction& f2) const
{
Fraction total;

total.Num = Num * f2.Denom + f2.Num * Denom;
total.Denom = Denom * f2.Denom;

return total;
}

Fraction Fraction::operator-(const Fraction& f2) const
{
Fraction totalDiff;

totalDiff.Num = Num * f2.Denom + f2.Num * Denom;
totalDiff.Denom = Denom * f2.Denom;

return totalDiff;
}

Fraction Fraction::operator*(const Fraction& f2) const
{
Fraction totalMult;

totalMult.Num = Num * f2.Num;
totalMult.Denom = Denom * f2.Denom;

return totalMult;
}

Fraction Fraction::operator/(const Fraction& f2) const
{
Fraction totalDiv;

totalDiv.Num = Num *f2.Denom;
totalDiv.Denom = Denom * f2.Num;

return totalDiv;
}

Fraction Fraction::operator>>(const Fraction& f2) const
{
 Fraction totalExtraction;
totalExtraction = f2.getNum() >> f2.getDen();
//cin >> totalExtraction;
return totalExtraction;
}

Fraction Fraction::operator<<(const Fraction& f2) const
{
 Fraction totalInsertion;
totalInsertion = f2.getNum() << f2.getDen();
//cout << totalInsertion << endl;
return totalInsertion;
}

void Fraction::Display()
{
	 cout << Num << "/" << Denom;
}
