#include "Employee.h"

int Employee::uniqueID = 0;

Employee::Employee() : Employee("","") {}

Employee::Employee(const string& newName, const string& bankAccount)
{
	this->name = newName;
	this->bankAccount = bankAccount;
	this->employeeID = this->uniqueID++;
}

string Employee::getName()
{
	return this->name;
}

string Employee::getBankAcc()
{
	return this->bankAccount;
}

int Employee::getID()
{
	return this->employeeID;
}



