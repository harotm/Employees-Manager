#pragma once
#include <iostream>
#include <vector>
#include <string> 
#include <list>

using namespace std;

class Employee
{
public:	
	Employee();
	Employee(const string& newName, const string& bankAccount);
	string getName();
	string getBankAcc();
	int getID();
	virtual string paySalary() = 0;
	virtual bool isIntern() = 0;
	virtual	string print() = 0;
	void payInternBonus();
private:
	string name;
	string bankAccount;	
	static int uniqueID;
	int employeeID;
};