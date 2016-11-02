#include "Account.h"

Account::Account()
{
	ID = 0;
	balance = 0;
	// annualInterestRate = 0; this would cause ALL interest rates to drop to 0
}

Account::Account(string name, int ID, double balance)
{
	this->name = name;
	this->ID = ID;
	this->balance = balance;
}

int Account::getID() { return ID; }

double Account::getBalance() { return balance; }

double Account::getAnnualInterestRate() { return annualInterestRate; }

bool Account::setID(int newID)
{
	ID = newID;
	return true;
}

bool Account::setBalance(double newBalance)
{
	balance = newBalance;
	return true;
}

bool Account::setAnnualInterestRate(double newAnnualInterestRate)
{
	annualInterestRate = newAnnualInterestRate;
	return true;
}

double Account::getMonthlyInterestRate()
{
	return annualInterestRate / 12;
}

bool Account::withdrawl(double amount)
{
	Transaction t1('w', amount, balance, "this is a withdrawl");
	transactions.push_back(t1);
	balance -= amount;
	return true;
}

bool Account::deposit(double amount)
{
	Transaction t1('d', amount, balance, "this is a deposit");
	transactions.push_back(t1);
	balance += amount;
	return true;
}
