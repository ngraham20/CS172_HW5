#pragma once
#include <string>
using namespace std;

class Transaction
{
public:
	Transaction(char type, double amount, double balance, string description);
	~Transaction();

	string getDate();
	char getType();
	double getAmount();
	string getDescription();

	bool setDate(string);
	bool setType(char);
	bool setAmount(double);
	bool setDescription(string);

private:
	string date;
	char type;
	double amount;
	double balance;
	string description;
};

