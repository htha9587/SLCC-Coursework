//============================================================================
// Name        : Person.cpp
// Author      : htha9587
// Version     : 0.2
// Copyright   : Your copyright notice.
// Description : Introduction to C++ Objects.
//============================================================================

#include <iostream>
#include "Person.h"

//Constructor.
	Person::Person(string myName, int myAge)
	{
		name = myName;
		age = myAge;
	}

	//Getter for the name data member.
	string Person::getName()
	{
		return name;
	}

	//Getter for the age data member.
	int Person::getAge()
	{
		return age;
	}

	//Setter for the name data member.
	void Person::setName(string newName)
	{
		name = newName;
	}

	//Setter for the age data member.
	void Person::setAge(int newAge)
	{
		age = newAge;
	}

	//Outputs the person data with the name and age information.
	void Person::display()
	{
		cout << "Person: " << endl;
		cout << "Hi! My name is " << name << " and I am " << age << " years old." << endl;
	}
