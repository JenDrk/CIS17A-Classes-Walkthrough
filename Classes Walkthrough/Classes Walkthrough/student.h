#pragma once
#include <string>

class student
{
private:
	std::string _name;
public:
	student();
	student(std::string name);
	~student();

	std::string GetName();
};

