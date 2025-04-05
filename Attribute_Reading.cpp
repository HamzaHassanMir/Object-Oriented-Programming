#include<iostream>
#include<fstream>
#include<string>
#include<sstream>  
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
		cout << "Enter 1 for entering data, 2 for displaying students with GPA >= 3.5, and 0 for exiting: ";
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
		else if (choice == 2)
		{
			ifstream myfile("StudentInfo.csv");
			string line;
			getline(myfile, line);

			cout << "Students with GPA 3.5:" << endl;

			while (getline(myfile, line))
			{
				stringstream ss(line);
				string regnumber, firstname, lastname, program, contactnumber;
				float gpa;

				getline(ss, regnumber, ',');
				getline(ss, firstname, ',');
				getline(ss, lastname, ',');
				getline(ss, program, ',');
				ss >> gpa;
				ss.ignore(); 
				getline(ss, contactnumber);
				if (gpa >= 3.5)
				{
					cout << "Registration Number: " << regnumber << endl;
					cout << "First Name: " << firstname << endl;
					cout << "Last Name: " << lastname << endl;
					cout << "Program: " << program << endl;
					cout << "CGPA: " << gpa << endl;
					cout << "Contact Number: " << contactnumber << endl;
				}
			}
			myfile.close();
		}
		else if (choice == 0)
		{
			break;
		}
		else
		{
			cout << "Invalid choice, please try again." << endl;
		}
	}

	return 0;
}
