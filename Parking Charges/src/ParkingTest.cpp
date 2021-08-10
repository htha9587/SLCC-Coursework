/*
 * ParkingTest.cpp
 *
 *  Created on: September 22, 2016
 *      Author: htha9587
 */

#include<iostream>
#include"ParkingCharges.h"
#include<iomanip>
#include<cstdlib>
#include<cmath>

using namespace std;

int main() //Program execution.
{
	double hour; //Amount of car hours.
	double charge; //Amount of charge.
	double totalCharges = 0.0; //Complete charge.
	double totalHours = 0.0; //Complete number of hours.
	double parkingCharges(double hours); //Calculates charge amount with hours.

//Prompts user to enter number of parking hours.
cout <<"Enter the number 0f hours a car parked here." << endl;
cin >> hour;

while( hour > 0)
	{
		//Sets totalHour equal to hour.
		totalHours += hour;
		//Initializes charge.
		charge = 0.00;
		//Sets totalCharge equal to charge.
		totalCharges += charge;
		//Initializes hour.
		hour = 0.00;
		//Current charge for the car output.
		cout << "Charge in $ " << setprecision(2) << charge << endl;
//Prompts user for the number of parking hours for the next car.
cout <<"Enter the number of hours a car parked here(next car)." << endl;
cin >> hour;
	}//End of the while loop.

//Displays total hours and charges.
cout << "\nTotal hours:\t" << setprecision(1) << totalHours << endl;
cout << "\nTotal charge:\t" << setprecision(2) << totalCharges << endl;

	return 0;
} //End of main.
