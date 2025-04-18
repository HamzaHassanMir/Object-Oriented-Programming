#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
	char name[50];
	int age[5];
	int salary[5];
	

	cout << "Enter data: " << endl;
	
	int i = 0;
	while (i<6)
	{

		cout << "enter name: " << endl;
		cin.getline(name,50);

		cout << "Age:" << endl;
		cin >> age[i];
		cout << "Salary:" << endl;
		cin >> salary[i];
		++i;
	}
	
	ofstream fout;
	fout.open("employees.txt");

	fout << name<<" ";
	fout << salary<<" ";
	fout << age<<" ";
	fout.close();

	return 0;
}
