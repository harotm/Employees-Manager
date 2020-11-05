#pragma once
#include "Intern.h"

Intern::Intern(const string& newName, const string& newBankAcc, float newSalary) : Employee(newName, newBankAcc)
{
	this->salary = newSalary;
};

bool Intern::isIntern()
{
	return true;
}

string Intern::paySalary()
{
	string result = "";
	result += "The intern ";
	result += getName();
	result += " has received the ammount of ";
	result += to_string(this->salary);
	result += " in the following bank account: ";
	result += getBankAcc();
	result += "\n";
	return result;
}

string Intern::print()
{
	string result = "";
	result += "Intern name: ";
	result += this->getName();
	result += " Bank Account: ";
	result += this->getBankAcc();
	result += " ID: ";
	result += to_string(this->getID());
	result += "\n";

	return result;
}

string Intern::payInternBonus()
{
	float bonus = 0;
	cout << "Input bonus for interns: ";
	cin >> bonus;
	string result = "";
	result += "The intern ";
	result += getName();
	result += " has received the ammount of ";
	result += to_string(bonus);
	result += " in the following bank account: ";
	result += getBankAcc();
	result += "\n";
	return result;
}

