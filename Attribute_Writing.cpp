#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string regnumber;
	string firstname;
	string lastname;
	string program;
	float gpa;
	string contactnumber;

	ofstream myfile;
	myfile.open("StudentInfo.csv");

	if (myfile.is_open())
	{
		myfile << "Registration Number" << " , " << "First Name " << ", " << "Last Name " << ", " << "Program " << ", " << "CGPA " << ", " << "Contact Number" << endl;
	}
	myfile.close();

	while (1)
	{
		int choice;
		cout << "Enter 1 for entering data and 0 for exiting: ";
		cin >> choice;
		if (choice == 1)
		{
			myfile.open("StudentInfo.csv", ios::app);
			cout << "Enter Registration number: ";
			cin >> regnumber;

			cout << "Enter First Name: ";
			cin >> firstname;

			cout << "Enter last Name: ";
			cin >> lastname;

			cout << "Enter Program Name: ";
			cin >> program;

			cout << "Enter CGPA: ";
			cin >> gpa;

			cout << "Enter contact Number: ";
			cin >> contactnumber;

			myfile << regnumber << " , " << firstname << " , " << lastname << " , " << program << " , " << gpa << " , " << contactnumber << endl;
			myfile.close();
		}
		if (choice == 0)
		{
			break;
		}
	}

	return 0;
}