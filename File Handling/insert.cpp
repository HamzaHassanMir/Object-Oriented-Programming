#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;

	int a[5];
	fin.open("file.txt");
	for (int i = 0; i < 5; i++)
	{

		fin >> a[i];
	}

	ofstream fout;

	fout.open("temp.txt");
	for (int i = 0; i < 3; i++)
	{

		fout << a[i] << endl;
		cout << a[i] << endl;
	}
	int n = 66;
	fout << n << endl;
	cout << n << endl;

	for (int i = 3; i < 5; i++)
	{

		fout << a[i] << endl;
		cout << a[i] << endl;
	}

	fout.close();
	fin.close();
	remove("file.txt");
	rename("temp.txt", "file.txt");


}