#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	float input[5];

	ofstream fout;
	fout.open("float.txt");
	cout << "Enter 5 integers:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cin.ignore();
		fout << input[i]<<" ";
	}

	fout.close();

	return 0;
}