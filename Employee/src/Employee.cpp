//============================================================================
// Name        : Employee.cpp
// Author      : htha9587
// Version     : 0.1.
// Copyright   : Your copyright notice.
// Description : Employee Implementation class.
//============================================================================

#include <iostream>
#include<string>
#include "Employee.h"

using namespace std;

//Constructor.
Employee::Employee(string fName, string lName, int sal)
{
	firstName = fName;
	lastName = lName;
	monthlySalary = sal;

	if(sal >= 0)
	          {
	              monthlySalary = sal;
	          }
	          else
	          {
	              monthlySalary = 0;
	              cout<<"This salary is invalid."<<endl;
	          }
	       }

//Sets firstName.
void Employee::setFirstName(string fName)
{
	firstName = fName;
}

//Returns firstName.
string Employee::getFirstName()
{
	return firstName;
}

//Sets lastName.
void Employee::setLastName(string lName)
{
	lastName = lName;
}

//Returns lastName.
string Employee::getLastName()
{
	return lastName;
}

//Sets salary.
void Employee::setMonthlySalary(int sal)
{
	if(sal >= 0)monthlySalary = sal;
	else monthlySalary = 0;
}

//Returns salary.
int Employee::getMonthlySalary()
{
	return monthlySalary;
}

//Prints out object data.
void Employee::printInfo()
{
	cout<< "First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
}
