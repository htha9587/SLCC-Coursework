/*
 * CSIS1600
 * A04a Retail Sales.
 * class RetailSales Application.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "RetailSales.h"

using namespace std;

double productPrice[6];
double productTotal[6];
int productQuantity[6];
double totalRetailValue1;
double totalRetailValue2;
double totalRetailValue3;
double totalRetailValue4;
double totalRetailValue5;

	RetailSales::RetailSales()
	:productPrice {2.98, 4.50, 3.98, 4.49, 6.87}
	{
	    productTotal[6] = {};
		productQuantity[6] = {};
		totalRetailValue1 = 0;
		totalRetailValue2 = 0;
		totalRetailValue3 = 0;
		totalRetailValue4 = 0;
		totalRetailValue5 = 0;
	}

	void RetailSales::enterProducts()
	{
		int productNumber;
		int productQuantity;
		double productTotal;
		cout<<"Enter the product number (1-5) (0 to Stop): ";
	    cin>>productNumber;
	    cout<<"Enter quantity sold: ";
		cin>>productQuantity;

		while (productNumber != 0 ){

		      switch (productNumber)
		{
		       case 1:
		       totalRetailValue1+=(productQuantity*productPrice[0]);
		       cout<<"The sales for this Product 1 is $ "<<totalRetailValue1<<endl;
		       break;

		       case 2:
		       totalRetailValue2+=(productQuantity*productPrice[1]);
		       cout<<"The sales for this Product 2 is $ "<<totalRetailValue2<<endl;
		       break;

		       case 3:
		       totalRetailValue3+=(productQuantity*productPrice[2]);
		       cout<<"The sales for this Product 3 is $ "<<totalRetailValue3<<endl;
		       break;

		       case 4:
		       totalRetailValue4+=(productQuantity*productPrice[3]);
		       cout<<"The sales for this Product 4 is $ "<<totalRetailValue4<<endl;
		       break;

		       case 5:
		       totalRetailValue5+=(productQuantity*productPrice[4]);
		       cout<<"The sales for this Product 5 is $ "<<totalRetailValue5<<endl;
		       break;

		       default:
		       cout << "Invalid product code: " << productNumber
		       << "\n Quantity: " << productQuantity << '\n';
		       break;
		}
		 cout<<"\nEnter the product number (1-5) (0 to Stop): ";
		 cin>>productNumber;
		 cout<<"Enter quantity sold: ";
		 cin>>productQuantity;
		}
	}

	void RetailSales::displayTotalValue()
	{
		 cout<<"Total Sales for the week"<<endl;
		 cout<<"Product 1 $ "<<totalRetailValue1<<endl;
		 cout<<"Product 2 $ "<<totalRetailValue2<<endl;
		 cout<<"Product 3 $ "<<totalRetailValue3<<endl;
		 cout<<"Product 4 $ "<<totalRetailValue4<<endl;
		 cout<<"Product 5 $ "<<totalRetailValue5<<endl;
	}

