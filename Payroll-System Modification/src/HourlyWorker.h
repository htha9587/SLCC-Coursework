/*
 * HourlyWorker.h
 *
 *  Created on: November 17, 2016
 *      Author: htha9587
 */

#ifndef HOURLYWORKER_H_
#define HOURLYWORKER_H_
#include <string>
#include "Employee.h"

class HourlyWorker : public Employee
{
public:
	HourlyWorker(const std::string&, const std::string&,
		      const std::string&, double = 0.0, int = 0);
	   virtual ~HourlyWorker() = default; //Virtual destructor.
	   void setWage(double);
	   double getWage() const;
	   void setHours(double);
	   double getHours() const;
	   virtual double earnings() const override;
	   virtual std::string toString() const override;
	private:
	   double wage;
	   double hours;
};

#endif /* HOURLYWORKER_H_ */
