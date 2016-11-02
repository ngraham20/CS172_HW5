#include "Transaction.h"


Transaction::Transaction(char type, double amount, double balance, string description)
{
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
}

Transaction::~Transaction()
{
}

string Transaction::getDate()
{
	return date;
}

char Transaction::getType()
{
	return type;
}

double Transaction::getAmount()
{
	return amount;
}

string Transaction::getDescription()
{
	return description;
}

bool Transaction::setDate(string date)
{
	this->date = date;
	return true;
}

bool Transaction::setType(char type)
{
	this->type = type;
	return true;
}

bool Transaction::setAmount(double amount)
{
	this->amount = amount;
	return true;
}

bool Transaction::setDescription(string description)
{
	this->description = description;
	return true;
}
