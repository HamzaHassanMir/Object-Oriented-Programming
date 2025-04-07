#include <iostream>
#include <string>

using namespace std;

class Employee 
{
private:
	int id;
	string name;
	double salary;

public:
	Employee(int id, string name, double salary) 
	{
		this->id = id;
		this->name = name;
		this->salary = salary;
	}

	int getId() const 
	{ 
		return id; 
	}
	string getName() const 
	{
		return name;
	}
	double getSalary() const 
	{ 
		return salary; 
	}
};

class EMS {
private:
	Employee* employees[100];
	int numEmployees;

public:
	EMS() : numEmployees(0) {}

	void addEmployee(Employee* emp) 
	{
		if (numEmployees < 100) 
		{
			employees[numEmployees++] = emp;
		}
		else 
		{
			cout << "Employee limit reached." << endl;
		}
	}

	void displayAllEmployees() 
	{
		cout << "Employee Records:" << endl;
		for (int i = 0; i < numEmployees; i++)
		{
			cout << "ID: " << employees[i]->getId() << ", Name: " << employees[i]->getName() << ", Salary: " << employees[i]->getSalary() << endl;
		}
	}

	Employee* searchEmployeeById(int id) 
	{
		for (int i = 0; i < numEmployees; i++) 
		{
			if (employees[i]->getId() == id)
			{
				return employees[i];
			}
		}
		return nullptr;
	}

	void deleteEmployeeById(int id) 
	{
		for (int i = 0; i < numEmployees; i++) 
		{
			if (employees[i]->getId() == id) 
			{
				for (int j = i; j < numEmployees - 1; j++) 
				{
					employees[j] = employees[j + 1];
				}
				numEmployees--;
				return;
			}
		}
	}
};

int main() 
{
	EMS ems;

	Employee* emp1 = new Employee(1001, "Ayyat Mir", 70000);
	Employee* emp2 = new Employee(1002, "Ayyan Ali", 60000);
	Employee* emp3 = new Employee(1003, "Umber Mir", 55000);

	ems.addEmployee(emp1);
	ems.addEmployee(emp2);
	ems.addEmployee(emp3);

	ems.displayAllEmployees();

	Employee* foundEmp = ems.searchEmployeeById(1002);
	if (foundEmp) 
	{
		cout << "Found Employee: " << foundEmp->getName() << endl;
	}

	ems.deleteEmployeeById(1002);

	ems.displayAllEmployees();

	return 0;
}