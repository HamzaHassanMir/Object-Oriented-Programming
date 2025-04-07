#include"Student.h"

int main()
{
	Student student;
	int id;
	cout << "Enter Student Id: " << endl;
	cin >> id;
	student.setId(id);

	int grade[3];
	cout << "Enter grades: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> grade[i];
	}
	student.setGrades(grade[0], grade[1], grade[2]);

	char studname[50];
	cout << "Enter Name: " << endl;
	cin.ignore();
	cin.getline(studname, 50);
	student.setName(studname);
	
	cout << endl;
	cout << "Student Details: " << endl;
	cout << "Student Name " << student.getName() << endl;
	cout << "Student Id " << student.getStudentId() << endl;
	cout << "Student grades: ";
	student.getGrades();

	cout << endl;
	cout << "Average of student is " << student.calculateAverage() << endl;
	return 0;
}