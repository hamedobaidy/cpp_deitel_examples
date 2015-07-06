#include "Employee.h"

Employee::Employee(string fname, 
		string lname, int salary)
{
	setFirstName(fname);
	setLastName(lname);
	setSalary(salary);
}

void Employee::setFirstName(string f)
{
	fname = f;
}

string Employee::getFirstName()
{
	return fname;
}

void Employee::setLastName(string l)
{
	lname = l;
}

string Employee::getLastName()
{
	return lname;
}

void Employee::setSalary(int s)
{
	if(s < 0)
		salary = 0;
	else
		salary =s;
}

int Employee::getSalary()
{
	return salary;
}
