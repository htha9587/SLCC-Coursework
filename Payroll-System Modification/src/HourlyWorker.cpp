/*
 * HourlyWorker.cpp
 *
 *  Created on: November 17, 2016
 *      Author: htha9587
 */

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Employee.h"
using namespace std;

   HourlyWorker::HourlyWorker(string first, string last, string ssn,
 double hourlyWage, double hoursWorked )
   {
      setWage( hourlyWage ); //Validates and stores hourly wage.
      setHours( hoursWorked ); //Validates and stores hours worked.
   }

   void HourlyWorker::setWage( double hourlyWage )
   {
      wage = ( hourlyWage < 0.0 ) ? 0.0 : hourlyWage;
   }

    double HourlyWorker::getWage() const
   {
       return wage;
   }

    void HourlyWorker::setHours( double hoursWorked )
   {
      hours = ( ( hoursWorked >= 0.0 ) && ( hoursWorked <= 168.0 ) ) ?
         hoursWorked : 0.0;
   }

    double HourlyWorker::getHours() const
   {
      return hours;
   }

    double HourlyWorker::earnings() const
   {
      if ( getHours() <= 40 )
         return getWage() * getHours();
      else
         return 40 * getWage() + ( getHours() - 40 ) * getWage() * 1.5;
   }

   string HourlyWorker::toString() const
   {
	   ostringstream output;
	  		      output << fixed << setprecision(2);
	  		      output << "Hourly-Worker " << Employee::toString()
	  		         << "; Hours: " << getHours()
	  		      << "; Wage: " << getWage();
	  		      return output.str();
   }

 //End of class.
