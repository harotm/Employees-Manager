#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contractor : public Employee
{
public:
	Contractor();
	Contractor(const string& newName, const string& newBankAcc, float moneyPerHour, int newHours);
	bool isIntern();
	string paySalary();
	string print();
private:
	float moneyPerHour;
	int hoursToWork;
};