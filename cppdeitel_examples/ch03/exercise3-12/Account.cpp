#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int ini_balance)
{
	if(ini_balance >= 0)
		balance = ini_balance;
	else
	{
		balance = 0;
		cout << "Invalid initial balance. Balance set to zero\n";
	}
}

int Account::getBalance()
{
	return balance;
}

void Account::credit(int amount)
{
	balance += amount;
}

void Account::debit(int amount)
{
	if(amount <= balance)
		balance -= amount;
	else
		cout << "Debit amount exceeded amount balance.\n";
}
