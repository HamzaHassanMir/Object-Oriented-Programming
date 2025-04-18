#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
	int sum = 0;

	ofstream fout;
	fout.open("odd_numbers.txt");

	cout << "Odd numbers are:" << endl;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2!=0)
		{
			fout << i << endl;;
			sum = sum + i;
		}
	}

	fout << "The sum of odd numbers is : " << sum << endl;
	fout.close();

	return 0;
}
