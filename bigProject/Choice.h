#pragma once
#include "Employee.h"
#include "Intern.h"
#include "Contractor.h"

class Choice
	{
	public:
		~Choice();
		void printAll();
		void choice(int choice);
	private:
		vector <Employee*> employeeS = {};
		void addIntern();
		void addContractor();
		void payInternBonus();


};