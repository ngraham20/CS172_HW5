#pragma once
#include <string>
#include "Transaction.h"
using namespace std;

class Account
{
public:
	Account();
	Account(string name, int ID, double balance);

	int getID();
	double getBalance();
	double getAnnualInterestRate();

	bool setID(int);
	bool setBalance(double);
	bool setAnnualInterestRate(double);

	double getMonthlyInterestRate();

	bool withdrawl(double);
	bool deposit(double);

private:
	string name;
	int ID;
	double balance;
	static double annualInterestRate;
};

