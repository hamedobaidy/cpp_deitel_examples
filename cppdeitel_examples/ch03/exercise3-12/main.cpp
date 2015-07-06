#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account account(100);
	cout << "Initial balance is: " 
		<< account.getBalance()
		<< endl;
	account.credit(100);
	account.debit(100);
	cout << "Final balance is: "
		<< account.getBalance()
		<< endl;

	return 0;
}
