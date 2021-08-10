/*
 * EmployeeTest.cpp
 *
 *  Created on: September 15, 2016
 *      Author: htha9587
 */
#include<iostream>
#include "Employee.h"

using namespace std;

int main() //Program execution.
{
	//Creates two employee objects.
	Employee employee1("Harrison", "Thacker", 5000);
	Employee employee2("Forrest", "Thacker", 1000);

	//Returns and displays yearly salary for employees.
	int monthlySalary1 = employee1.getMonthlySalary();
	cout << "Employee 1: " << employee1.getFirstName() << " "
			<< employee1.getLastName() << "; Yearly Salary: "<< monthlySalary1 * 12 << endl;

	int monthlySalary2 = employee2.getMonthlySalary();
	cout << "Employee 2: " << employee2.getFirstName() << " "
			<< employee2.getLastName() << "; Yearly Salary: "<< monthlySalary2 * 12 << endl;

	//Returns salaries increased by 10%.
	cout <<"\n Increasing employee salaries by 10%." << endl;

	employee1.setMonthlySalary(monthlySalary1 * 1.1);
	employee2.setMonthlySalary(monthlySalary2 * 1.1);

	//Returns new salaries.
	monthlySalary1 = employee1.getMonthlySalary();
	cout << "Employee 1: " << employee1.getFirstName() << " "
			<< employee1.getLastName() << "; Yearly Salary: "<< monthlySalary1 * 12 << endl;

	monthlySalary2 = employee2.getMonthlySalary();
	cout << "Employee 2: " << employee2.getFirstName() << " "
			<< employee2.getLastName() << "; Yearly Salary: "<< monthlySalary2 * 12 << endl;

}// End of main.
