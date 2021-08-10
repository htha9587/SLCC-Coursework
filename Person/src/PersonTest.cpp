/*
 * PersonTest.cpp
 *
 *  Created on: September 8, 2016
 *      Author: htha9587
 */
#include <iostream>
#include <string>
#include "Person.h"
#define PERSON_H_INCLUDED

using namespace std;

	int main()//Program execution.
	{
		//Creates person object.
		Person p("Harrison Thacker", 18);
		p.display();

		return 0;
	}//End of main.
