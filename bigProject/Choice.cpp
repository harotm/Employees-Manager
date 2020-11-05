#include "Choice.h"


Choice::~Choice()
{
	for (auto employee : employeeS)
	{
		delete employee;
	}
}

void Choice::printAll()
{
	for (auto it : employeeS)
	{
		cout << it->print();
	}
}

void Choice::choice(int choice)
{
	switch (choice)
	{
	case 1:
		cout << "----------------------------" << endl;
		cout << "Add intern" << endl;
		cout << "----------------------------" << endl;
		Choice::addIntern();
		break;
	case 2:
		cout << "Add contractor" << endl;
		Choice::addContractor();
		break;
	case 3:
		cout << "----------------------------" << endl;
		cout << "Delete employee" << endl;
		cout << "----------------------------" << endl;
		int uniqueIDdelete;
		cout << "Input the unique ID of the employee you want to delete: ";
		cin >> uniqueIDdelete;
		Employee* temp;
		
		for (auto& it : employeeS)
		{
			if (it->getID() == uniqueIDdelete)
			{
				
				cout << "----------------------------" << endl;
				cout << "Employee " << it->getName() <<" with unique ID "<< it->getID() <<" deleted sucessfully!" << endl;
				cout << "----------------------------" << endl;

				
				temp = employeeS.back();
				employeeS.back() = it;
				it = temp;
				break;
			}

		}
		employeeS.pop_back();
		break;
	case 4:
		cout << "----------------------------" << endl;
		cout << "Print all employees" << endl;
		cout << "----------------------------" << endl;
		Choice::printAll();
		break;
	case 5:
		cout << "----------------------------" << endl;
		cout << "Print all interns" << endl;
		cout << "----------------------------" << endl;
		for (auto it : employeeS)
		{
			if (it->isIntern())
			{
				cout << it->print();
			}
		}
		break;
	case 6:
		cout << "----------------------------" << endl;
		cout << "Print all contractors" << endl;
		cout << "----------------------------" << endl;
		for (auto it : employeeS)
		{
			if (!it->isIntern())
			{
				cout << it->print();
			}
		}
		break;
	case 7:
		cout << "----------------------------" << endl;
		cout << "Pay all salaries" << endl;
		cout << "----------------------------" << endl;
		for (auto it : employeeS)
		{
			cout << it->paySalary();
		}
		break;
	case 8:
		cout << "----------------------------" << endl;
		cout << "Pay bonus for interns" << endl;
		cout << "----------------------------" << endl;
		float bonus;
		cout << "Input bonus for interns: ";
		cin >> bonus;
		for (auto it : employeeS)
		{
			if (it->isIntern())
			{
				string result = "";
				result += "The intern ";
				result += it->getName();
				result += " has received the bonus of ";
				result += to_string(bonus);
				result += " in the following bank account: ";
				result += it->getBankAcc();
				result += "\n";
				cout << result;
			}
		}
		break;
	case 0:
		break;
	}
}
	
void Choice::addIntern()
{
	string name;
	string bankAcc;
	float salary;
	cout << "Intern name: ";
	cin >> name;
	cout << "Intern Bank Account: ";
	cin >> bankAcc;
	do
	{
		cout << "Input salary: ";
		cin >> salary;
	} while (salary < 1 || salary > 10000000);
	Intern* ptrIntern = new Intern(name, bankAcc, salary);
	employeeS.push_back(ptrIntern);

	cout << "----------------------------" << endl
		<< "Intern added sucessfully!" << endl
		<< "----------------------------" << endl;
}
void Choice::addContractor()
{
	string name;
	string bankAcc;
	float moneyPerHour;
	int hours;
	cout << "Contractor name: ";
	cin >> name;
	cout << "Contractor Bank Account: ";
	cin >> bankAcc;
	do
	{
		cout << "Input money/hour: ";
		cin >> moneyPerHour;
	} while (moneyPerHour < 1 || moneyPerHour > 10000000);
	cout << "Input number of hours: ";
	cin >> hours;
	
	Contractor* ptrContractor = new Contractor(name, bankAcc, moneyPerHour, hours);
	employeeS.push_back(ptrContractor);

	cout << "----------------------------" << endl
		 << "Contractor added sucessfully!" << endl
		 << "----------------------------" << endl;

}





