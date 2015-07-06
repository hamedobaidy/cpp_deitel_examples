#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee emp1("Hamed", "Mohammadi", 2000);
	Employee emp2("Obaideh", "Banihashemi", 1000);
	cout << emp1.getFirstName() << " " <<
		emp1.getLastName() << " salary: " <<
		emp1.getSalary() << endl;
	cout << emp2.getFirstName() << " " <<
		emp2.getLastName() << " salary: " <<
		emp2.getSalary() << endl;
	emp1.setSalary(emp1.getSalary() * 1.1);
	emp2.setSalary(emp2.getSalary() * 1.1);
	cout << emp1.getFirstName() << " " <<
		emp1.getLastName() << " salary: " <<
		emp1.getSalary() << endl;
	cout << emp2.getFirstName() << " " <<
		emp2.getLastName() << " salary: " <<
		emp2.getSalary() << endl;

	return 0;
}
