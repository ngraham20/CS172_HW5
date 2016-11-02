#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account account1;
	account1.setID(1122);
	account1.setBalance(20000);
	account1.setAnnualInterestRate(4.5);

	account1.withdrawl(2500);
	account1.deposit(3000);

	cout << account1.getBalance() << endl;
	cout << account1.getMonthlyInterestRate() << endl;

	return 0;
}