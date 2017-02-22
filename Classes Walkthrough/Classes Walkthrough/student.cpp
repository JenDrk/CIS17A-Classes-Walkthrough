#include "student.h"

using namespace std;

student::student(string name)
{
	_name = name;
}


student::~student()
{
}

std::string student::GetName()
{
	return _name;
}
