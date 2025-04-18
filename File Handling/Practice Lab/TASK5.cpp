#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number = 0;
	cout << "Enter number: " << endl;
	cin >> number;

	int product = 0;
	ofstream fout;
	fout.open("multiplication_table.txt");

	for (int i = 1; i <= 10; i++)
	{
		product = number*i;
		fout <<number<<" x "<< i <<" = " <<product << endl;
	}
	
	fout.close();

	return 0;
}
