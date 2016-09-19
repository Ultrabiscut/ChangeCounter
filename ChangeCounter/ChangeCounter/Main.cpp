#include <iostream>
using namespace std;

/*
Program: ChangeCounter
Author: Tyler Timmins
Class: ITSE 1307 2002
Description: Write a program that will ask the user to enter the amount of
	pennies, nickels, dimes, and quarters and convert it to a dollar amount.
*/

//function prototypes
void header(string sLine1);
double ChangeToDollars(double dCoin1, double dCoin2, double dCoin3, double dCoin4);
bool TryAgain();

int main()
{
	//variables
	string sHeader;
	double dPennies, dNickels, dDimes, dQuarters;
	double dProduct;

	//call on heading
	header(sHeader);

	//space
	cout << endl;
	do
	{
		//ask for input
		cout << "Enter the number of pennies: ";
		cin >> dPennies;
		cout << "Enter the number of nickels: ";
		cin >> dNickels;
		cout << "Enter the number of dimes: ";
		cin >> dDimes;
		cout << "Enter the number of quarters: ";
		cin >> dQuarters;

		//space
		cout << endl;

		//use ChangeToDollars funciton
		dProduct = ChangeToDollars(dPennies, dNickels, dDimes, dQuarters);


		//output
		cout << "The dollar amount is: " << dProduct << endl;
	
	} while (TryAgain());

	return 0;
}

void header(string sLine1)
{
	cout << "********************************************" << endl;
	cout << "*Program: Change Counter                   *" << endl;
	cout << "********************************************" << endl;
}

double ChangeToDollars(double dCoin1, double dCoin2, double dCoin3, double dCoin4)
{
	double dTotal;
	
	dCoin1 = dCoin1 * 0.01;
	dCoin2 = dCoin2 * 0.05;
	dCoin3 = dCoin3 * 0.10;
	dCoin4 = dCoin4 * 0.25;

	dTotal = dCoin1 + dCoin2 + dCoin3 + dCoin4;

	return dTotal;
}

bool TryAgain()
{
	//declare variables
	char cAgain;

	do
	{
		cout << "Continue? (Y/N): ";
		cin >> cAgain;
		cAgain = toupper(cAgain);
	} while (cAgain != 'Y' && cAgain != 'N');

	if (cAgain == 'y' || cAgain == 'Y')
		return true;

	return false;
}