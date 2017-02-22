#include <iostream>
#include "Teacher.h"
#include "student.h"
#include "Course.h"
using namespace std;


int main()
{
	Teacher james = Teacher("James");
	Course cis17 = Course("CIS17A", "Programming C++: Objects", james);
	student bob = student("bob");
	student jane = student("jane");
	
	cis17.EnrollStudent(bob, 0);
	cis17.EnrollStudent(jane, 1);
	
	getchar();
	return 0;
}