#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	int serial_no = {};
	char registration_no[14] = {};
	const int max_size = 100;
	char name[max_size] = {};
	double attandance_percentage = {};
	int absent_count = {};
	char attandance_status = {};
	char commagarbage = {};

	ifstream filereading;
	filereading.open("studentdata.csv");

	if (filereading.is_open())
	{
		char garbage[1000] = {};
		filereading.getline(garbage, 1000, '\n');

		cout << garbage << endl;
		while (filereading >> serial_no)
		{
			filereading >> commagarbage;

			filereading.getline(registration_no, 14, ',');

			filereading.getline(name, max_size, ',');

			filereading >> attandance_percentage;
			filereading >> commagarbage;

			filereading >> absent_count;
			filereading >> commagarbage;

			filereading >> attandance_status;
			cout << serial_no << " " << registration_no << " " << name << " " << attandance_percentage << " " << absent_count << " " << attandance_status << endl;
		}
	}
	else
	{
		cout << "Fail to load file" << endl;
	}
	filereading.close();

	char option;
	cout << "Do you want to add data: press Y for yes and N for no " << endl;
	cin >> option;

	if (option == 'Y' || option == 'y')
	{
		ofstream filewriting;
		filewriting.open("studentdata.csv", ios::app);

		if (filewriting.is_open())
		{
			char garbage[1000] = {};
			cin.getline(garbage, 1000, '\n');
			filewriting << garbage;

			cout << garbage << endl;
			while (filewriting << serial_no)
			{
				filewriting << commagarbage;

				cin.getline(registration_no, 14, ',');
				filewriting << registration_no;

				cin.getline(name, max_size, ',');
				filewriting << name;

				filewriting << attandance_percentage;
				filewriting << commagarbage;

				filewriting << absent_count;
				filewriting << commagarbage;

				filewriting << attandance_status;
				cout << serial_no << " " << registration_no << " " << name << " " << attandance_percentage << " " << absent_count << " " << attandance_status << endl;
			}
		}
		else
		{
			cout << "Fail to load file" << endl;
		}
		filewriting.close();
	}
	else
	{
		cout << serial_no << " " << registration_no << " " << name << " " << attandance_percentage << " " << absent_count << " " << attandance_status << endl;
	}
	return 0;
}