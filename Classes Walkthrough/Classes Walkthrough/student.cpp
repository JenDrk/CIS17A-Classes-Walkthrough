#include "student.h"

using namespace std;
student::student() //Constructor without any parameters is a default constructor
{
	_name = "Null";
}

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
