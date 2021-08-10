//============================================================================
// Name        : Grades.cpp
// Author      : htha9587
// Version     : 0.1
// Copyright   : Your copyright notice.
// Description : Introduction to 2D Array Tables.
//============================================================================

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<stdlib.h>
#include"Grades.h"

using namespace std;

Grades::Grades()
{

}

int main() {

	    int grades [5][7] = {85,88,90,81,73,68,75,77,94,89,82,91,88,79,81,84,71,65,78,73};

	    cout << "Grades Table: " <<endl;
	    cout <<"----------------------------\n\n";

	    for ( int row = 0; row < 5; row++)
	    {
	        for ( int column = 0; column < 7; column++)
	        {
	            cout << grades[row][column] << " ";
	        }
	        cout << endl;
	    }
	    return 0;
}
