/*
 * Fraction.h
 *
 *  Created on: November 8, 2016
 *      Author: htha9587
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction
{
public:
Fraction(int n = 1, int d = 1);
int getNum() const;
int getDen() const;

Fraction operator+(const Fraction& f2) const;
Fraction operator-(const Fraction& f2) const;
Fraction operator*(const Fraction& f2) const;
Fraction operator/(const Fraction& f2) const;
Fraction operator>>(const Fraction& f2) const;
Fraction operator<<(const Fraction& f2) const;
void Display();

private:
int Num, Denom;
};

#endif /* FRACTION_H_ */
