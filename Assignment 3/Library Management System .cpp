#include <iostream>
#include<string>
using namespace std;

class Person 
{
protected:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	void displayPerson() 
	{
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

class Staff : virtual public Person 
{
protected:
	string employeeID;
	string department;

public:
	Staff(string n, int a, string empID, string dept)
		: Person(n, a), employeeID(empID), department(dept) {}

	void displayStaff() 
	{
		displayPerson();
		cout << "Employee ID: " << employeeID << ", Department: " << department << endl;
	}
};

class Member : virtual public Person 
{
protected:
	string membershipID;
	int booksBorrowed;

public:
	Member(string n, int a, string memID, int books)
		: Person(n, a), membershipID(memID), booksBorrowed(books) {}

	virtual int calculateFine(int overdueBooks) 
	{
		return overdueBooks * 50;
	}

	void displayMember()
	{
		displayPerson();
		cout << "Membership ID: " << membershipID << ", Books Borrowed: " << booksBorrowed << endl;
	}
};

class Librarian : public Staff, public Member 
{
public:
	Librarian(string n, int a, string empID, string dept, string memID, int books)
		: Person(n, a), Staff(n, a, empID, dept), Member(n, a, memID, books) {}

	void displayRole() 
	{
		displayStaff();
		displayMember();
	}

	int calculateFine(int overdueBooks)
	{
		return (overdueBooks < 3) ? 0 : (overdueBooks * 50);
	}
};

int main() 
{
	cout << "Creating Librarian Object:\n";
	Librarian librarian("Abubakar", 20, "C5", "CS", "M456", 5);

	cout << "\nDisplaying Librarian Details:\n";
	librarian.displayRole();

	cout << "\nCalculating Fine:\n";
	Member* memberPtr = &librarian; 
	cout << "Fine for 2 overdue books: " << memberPtr->calculateFine(2) << "\n";
	cout << "Fine for 4 overdue books: " << memberPtr->calculateFine(4) << "\n";

	system("pause");
	return 0;
}
