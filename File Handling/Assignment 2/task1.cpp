#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	ifstream file("data.txt");
	if (!file.is_open()) 
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	int num_records;
	while (file >> num_records) 
	{
		cout << "Records are: ";
		for (int i = 0; i < num_records; ++i) 
		{
			int num;
			file >> num;
			cout << num << " ";
		}
		cout << endl;
	}

	file.close();
	return 0;
}
