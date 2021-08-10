/*
 * PieceWorker.cpp
 *
 *  Created on: November 17, 2016
 *      Author: htha9587
 */

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "PieceWorker.h"
#include "Employee.h"
using namespace std;

   	 PieceWorker::PieceWorker( const string& first, const string& last, const string& ssn,
   	double employeeWage, int numberOfPieces )
   	:PieceWorker(first, last, ssn, employeeWage, numberOfPieces)
   	{
		setWage( employeeWage ); //Validates and stores employee wage.
		setPieces( numberOfPieces ); //Validates and stores number of pieces.
   	}

   	 void PieceWorker::setWage( double employeeWage )
   	{
		wage = ( employeeWage < 0.0 ) ? 0.0 : employeeWage;
   	}

   	 double PieceWorker::getWage() const
   	{
		return wage;
   	}

   	 void PieceWorker::setPieces( double numberOfPieces  )
   	{
		pieces = ( ( numberOfPieces >= 0 ) && ( numberOfPieces <= 168 ) ) ?
	   	numberOfPieces : 0;
   	}

   	 double PieceWorker::getPieces() const
   	{
		return pieces;
   	}

	    double PieceWorker::earnings()
	   {
	      wage = 40.00;
	      pieces = 40;
	     return getWage() * getPieces();
	   }

	   string PieceWorker::toString() const
	   {
		   ostringstream output;
		      output << fixed << setprecision(2);
		      output << "Piece-Worker " << Employee::toString()
		         << "; Pieces: " << getPieces()
		      << "; Wage: " << getWage();
		      return output.str();
	   }
 //End of class.
