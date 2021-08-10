/*
 * CSIS1600
 * A04a Retail Sales
 * Class RetailSales Header File
 */

#ifndef RETAILSALES_H
#define RETAILSALES_H

class RetailSales
{
public:
RetailSales();
void enterProducts();
void displayTotalValue();

private:
double productPrice[6];
double productTotal[6];
int productQuantity[6];
double totalRetailValue1;
double totalRetailValue2;
double totalRetailValue3;
double totalRetailValue4;
double totalRetailValue5;
};

#endif // RETAILSALES_H
