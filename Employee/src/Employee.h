/*
 * Employee.h
 *
 *  Created on: September 15, 2016
 *      Author: htha9587
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<string>
using namespace std;

class Employee
		{
		public:
		Employee(string fName, string lName, int sal);
		void setFirstName(string fName);
		string getFirstName();
		void setLastName(string lName);
		string getLastName();
		void setMonthlySalary(int sal);
		int getMonthlySalary();
		void printInfo();

		private:
		string firstName;
		string lastName;
		int monthlySalary;

#endif /* EMPLOYEE_H_ */
		};
