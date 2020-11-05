#include <iostream>
#include "Employee.h"
#include "Contractor.h"
#include "Intern.h"
#include "Choice.h"

using namespace std;

void printMenu()
{	
		cout << " ----------------------------- " << endl;
		cout  << "| 1. Add intern               |" << endl
		<<		 "| 2. Add contractor           |" << endl
		<<		 "| 3. Delete employee          |" << endl
		<<		 "| 4. Print all employees      |" << endl
		<<		 "| 5. Print all interns        |" << endl
		<<		 "| 6. Print all contractors    |" << endl
		<<		 "| 7. Pay salaries             |" << endl
		<<		 "| 8. Pay bonus for interns    |" << endl
		<<		 "| 0. Exit                     |" << endl;
		cout <<	 " ----------------------------- " << endl;
}			


int main()
{
	Choice c2;
	int choice;
	do
	{
		printMenu();
		cout << "Please select an option: ";
		cin >> choice;

		if (choice < 0 || choice > 8)
		{
			cout << "---------------" << endl;
			cout << "Invalid option" << endl;
			cout << "---------------" << endl;
		}
		else
		{
			c2.choice(choice);
		}


	} while (choice != 0);


}