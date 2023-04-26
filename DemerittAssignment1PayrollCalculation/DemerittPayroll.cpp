#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	//Variables
	string lastName;
	string lastFourSSN;
	double payRate;
	unsigned int hoursWorked;
	double grossPay;
	double federalTax;
	double stateTax;
	double netPay;
	
	//Ask and store user Last Name
	cout << "Please enter your last name: ";
	cin >> lastName;

	//Ask and store last 4 of user Social
	cout << "Please enter the last four numbers of your SSN: ";
	cin >> lastFourSSN;

	//Ask and store hourly pay rate
	cout << "Please enter your hourly pay rate: ";
	cin >> payRate;

	//Ask and store hours worked
	cout << "Please enter the hours worked: ";
	cin >> hoursWorked;

	//Display upper summary info
	cout << endl << endl << "Payroll summary for: " << lastName << endl;
	cout << "SSN (Last 4 digits): " << lastFourSSN << endl;
	cout << "You worked " << hoursWorked << " hours at a pay rate of $" << payRate << " per hour." << endl;

	//Calculate the required info
	grossPay = payRate * hoursWorked;
	federalTax = grossPay * 0.15;
	stateTax = grossPay * 0.05;
	netPay = grossPay - federalTax - stateTax;

	//Display the calculated info
	cout << endl << "Gross pay: \t\t$   " << fixed << setprecision(2) << setw(10) << grossPay << endl;
	cout << "Federal Witholding: \t$   " << fixed << setprecision(2) << setw(10) << federalTax << endl;
	cout << "State tax witholding: \t$   " << fixed << setprecision(2) << setw(10) << stateTax << endl;
	cout << "--------------------------------------" << endl;
	cout << "Net pay: \t\t$   " << fixed << setprecision(2) << setw(10) << netPay << endl;

	system("pause");
	return 0;
}