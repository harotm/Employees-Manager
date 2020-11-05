#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Intern : public Employee
{
public:
	Intern();
	Intern(const string& newName, const string& newBankAcc, float newSalary);
	bool isIntern();
	string paySalary();
	string print();
	string payInternBonus();
private:
	float salary;
};