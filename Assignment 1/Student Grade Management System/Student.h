#include<iostream>
using namespace std;

class Student
{
private:
	int studentID;
	char* name;
	int grades[3];

public:
	Student();
	int getStudentId();
	char* getName();
	void getGrades();

	void setName(char* n);
	void setGrades(int grade1, int grade2, int grade3);
	void setId(int id);

	float calculateAverage();

	~Student();
};