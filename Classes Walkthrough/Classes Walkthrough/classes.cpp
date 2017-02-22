#include <iostream>
#include "Teacher.h"
#include "student.h"
using namespace std;


int main()
{
	Teacher james = Teacher("james");
	Teacher bob = Teacher("bob");
	cout << james.GetName() << endl;
	cout << bob.GetName() << endl;
	getchar();
	return 0;
}