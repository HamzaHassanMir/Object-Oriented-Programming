#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("even_numbers.txt");

	for (int i = 2; i <= 20; i++)
	{
		if (i % 2 == 0)
		{
			fout << i << " ";
			cout << endl;
		}
	}


	fout.close();

	return 0;
}
