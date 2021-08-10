/*
 * PieceWorker.h
 *
 *  Created on: November 17, 2016
 *      Author: htha9587
 */

#ifndef PIECEWORKER_H_
#define PIECEWORKER_H_
#include <string>
#include "Employee.h"

class PieceWorker : public Employee
{
public:
	PieceWorker(const std::string&, const std::string&,
		      const std::string&, double = 0.0, int = 0);
	   virtual ~PieceWorker() = default; //Virtual destructor.
	   void setWage(double);
	   double getWage() const;
	   void setPieces(double);
	   double getPieces() const;
	   virtual double earnings();
	   virtual std::string toString() const override;
	private:
	   double wage;
	   int pieces;
};

#endif /* PIECEWORKER_H_ */
