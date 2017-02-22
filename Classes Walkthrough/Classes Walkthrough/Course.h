#pragma once
#include <string>
#include "student.h"
#include "Teacher.h"

class Course
{
private:
	std::string _name;
	std::string _description;
	student _students[10];
	Teacher _teacher;
public:
	Course(std::string name, std::string description, Teacher teacher);
	~Course();

	bool EnrollStudent(student newStudent, int position);
	std::string GetClassInfo();
};

