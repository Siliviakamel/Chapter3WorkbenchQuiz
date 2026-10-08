#include <iostream>
using namespace std;

int main()
{
	double maxCredit;
	double creditUsed;
	double availableCredit;

	cout << "Enter the customer's maximum credit limit: ";
	cin >> maxCredit;
	
	cout << "Enter the amount of credit used: ";
	cin >> creditUsed;
	
	availableCredit = maxCredit - creditUsed;
	
	cout << "The customer's available credit is: $" << availableCredit << endl;
	
	return 0;
}