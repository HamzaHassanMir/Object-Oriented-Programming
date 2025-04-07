#include "Student.h"


Student::Student()
{
	int studentID = 0;
	char* name = NULL;
	int grades[3];
	for (int i = 0; i < 3; i++)
	{
		grades[i] = 0;
	}
}

void Student::setGrades(int grade1, int grade2, int grade3)
{
	grades[0] = grade1;
	grades[1] = grade2;
	grades[2] = grade3;
}

void Student::setId(int id)
{
	studentID = id;
}

void Student::setName(char* n)
{
	int size = strlen(n);
	name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		name[i] = n[i];
	}
	name[size] = '\0';
}

int Student::getStudentId()
{
	return studentID;
}

void Student::getGrades()
{
	for (int i = 0; i < 3; i++)
	{
		cout<< grades[i]<<" ";
	}
}

char* Student::getName()
{
	int size = strlen(name);
	char* temp = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = name[i];
	}
	temp[size] = '\0';
	return temp;
}

float Student::calculateAverage()
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = sum + grades[i];
	}
	float average =  sum / 3;
	return average;
}

Student::~Student()
{
	delete[] name;
	cout << "Deconstructor is called" << endl;
}