#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, string instructor)
{
	setCourseName(name);
	setInstructorName(instructor);
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< " by " << getInstructorName() << "!" << endl;
}

void GradeBook::setInstructorName(string inst)
{
	instructor = inst;
}

string GradeBook::getInstructorName()
{
	return instructor;
}
