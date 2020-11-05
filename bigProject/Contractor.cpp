#include "Contractor.h"
#include "Employee.h"
#include "Intern.h"
#include "Choice.h"
Contractor::Contractor(const string& newName, const string& newBankAcc, float moneyPerHour, int newHours) : Employee(newName, newBankAcc)
{
	this->moneyPerHour = moneyPerHour;
	this->hoursToWork = newHours;
	
}

bool Contractor::isIntern()
{
	return false;
}

string Contractor::paySalary()
{
	string result = "";
	result += "The contractor ";
	result += getName();
	result += " has received the ammount of ";
	result += to_string(this->moneyPerHour * this->hoursToWork);
	result += " in the following bank account: ";
	result += getBankAcc();
	result += "\n";
	return result;
}

string Contractor::print()
{
	string result = "";
	result += "Contractor name: ";
	result += this->getName();
	result += " Bank Account: ";
	result += this->getBankAcc();
	result += " ID: ";
	result += to_string(this->getID());
	result += "\n";

	return result;
}
