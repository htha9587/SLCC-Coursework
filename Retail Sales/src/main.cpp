/*
 * CSIS1600
 * A04a Retail Sales.
 * Class RetailSales Application.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "RetailSales.h"

using namespace std;

int main()
{
  RetailSales rs;
  char selection = ' ';

  do{
    //Displays the menu.
    system("cls");
    cout << "--[ Retail Sales - Main Menu ]--\n\n"
         << "1. Enter products sold\n"
         << "2. Display total retail value\n"
         << "3. Exit\n\n"
         << "Selection: ";

    //Gets a menu selection.
    cin >> selection;

    //Processes the selection.
    switch(selection)
    {
      case '1': rs.enterProducts(); break;
      case '2': rs.displayTotalValue(); break;
      case '3': break;
      default:
        cout << "\nInvalid choice!\n" << endl;
        system("pause");
    }
  }while(selection != '3');
  return 0;
}//End of main.
