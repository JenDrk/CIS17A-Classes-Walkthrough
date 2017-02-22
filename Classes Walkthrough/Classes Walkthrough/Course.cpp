#include "Course.h"
#include <string>
using namespace std;



Course::Course(string name, string description, Teacher teacher) : _name(name), _description(description), _teacher(teacher)
{
}


Course::~Course()
{
}

bool Course::EnrollStudent(student newStudent, int position)
{
	if (position <= 9 && _students[position].GetName() == "Null")
	{
		_students[position] = newStudent;
		return true;
	}
	return false;
}
