#include <iostream>
#include<string>

using namespace std;

class Employee {
public:
	string name;
	Employee(string empName) : name(empName) {}
	void show() { cout << "Employee Name: " << name << endl; }
};

// Company class (contains Employees)
class Company {
private:
	Employee* emp;  // Aggregation
public:
	Company(Employee* e) : emp(e) {}  // Aggregation: Company does not own Employee
	void showEmployee() { emp->show(); }
};

int main() {
	Employee* e1 = new Employee("John");  // Employee exists independently
	Company c1(e1);  // Company uses Employee

	c1.showEmployee();

	delete e1;  // Employee must be deleted manually
	return 0;
}
