#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char grade[5];
	cout << "Enter grade: " << endl;

	ofstream fout;
	fout.open("grades.txt");

	for (int i = 0; i < 5; i++)
	{
		cin >> grade[i];
		fout << grade[i] << endl;
	}

	fout.close();

	return 0;
}
