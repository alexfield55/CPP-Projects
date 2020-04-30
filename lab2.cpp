//Field, Alex
//Feb 23 Lab #2B
//COSCI575 TH 9-10

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double Tax_Rate = .14;
const double Clothing_Rate = .20;
const double School_Supplies_Rate = .05;
const double Savings_Rate = .25;



int main()
{

	string intials;

	double wk1, wk2, wk3, wk4, wk5;
	double hourlyRate;
	double hoursWorked;
	double grossEarnings;
	double taxesPaid;
	double netEarnings;
	double clothesCost;
	double schoolSuppliesCost;
	double amtRemaining;
	double savings;
	double amountLeft;
	double totalhoursworked;

	cout << "Enter your intials" << endl;
	cin >> intials;
	cout << endl;


	cout << "Enter your hourly rate" << endl;
	cin >> hourlyRate;
	cout << endl;

	cout << "Enter hours worked week 1" << endl;
	cin >> wk1;
	cout << endl;

	cout << "Enter hours worked week 2" << endl;
	cin >> wk2;
	cout << endl;

	cout << "Enter hours worked week 3" << endl;
	cin >> wk3;
	cout << endl;

	cout << "Enter hours worked week 4" << endl;
	cin >> wk4;
	cout << endl;

	cout << "Enter hours worked week 5" << endl;
	cin >> wk5;
	cout << endl;

	totalhoursworked = (wk1 + wk2 + wk3 + wk4 + wk5);

	grossEarnings = (wk1 + wk2 + wk3 + wk4 + wk5)*hourlyRate;

	taxesPaid = grossEarnings * Tax_Rate;

	netEarnings = grossEarnings - taxesPaid;

	clothesCost = netEarnings * Clothing_Rate;

	schoolSuppliesCost = netEarnings * School_Supplies_Rate;

	amtRemaining = grossEarnings - taxesPaid - clothesCost - schoolSuppliesCost;

	savings = amtRemaining * Savings_Rate;

	amountLeft = amtRemaining - savings;




	cout << "Intials\t\t\t" << setw(15) << intials << endl;
	cout << "Totals Hours Worked\t" << setw(15) << totalhoursworked << endl;
	cout << "Gross Earnings\t\t" << setw(15) << grossEarnings << endl;
	cout << "Taxes Paid\t\t" << setw(15) << taxesPaid << endl;
	cout << "Net Earnings\t\t" << setw(15) << netEarnings << endl;
	cout << "Expenses\t\t\t" << endl;
	cout << "Clothes\t\t\t" << setw(15) << clothesCost << endl;
	cout << "School Supplies\t\t" << setw(15) << schoolSuppliesCost << endl;
	cout << "Amount Remaining\t" << setw(15) << amtRemaining << endl;
	cout << "Savings\t\t\t" << setw(15) << savings << endl;
	cout << "Amount left to spend\t" << setw(15) << amountLeft << endl;

	return 0;



}
