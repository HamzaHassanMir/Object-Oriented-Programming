#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ifstream filereading("Input2.txt");
	if (!filereading.is_open()) 
	{
		cout << "Error opening file.\n";
		return 1;
	}

	const int MAX_CHARS = 1000; 
	char line[MAX_CHARS];

	int total_sentences = 0;
	while (filereading.getline(line, MAX_CHARS)) 
	{
		for (int i = 0; line[i] != '\0'; i++) 
		{
			if (line[i] == '.' || line[i] == '?' || line[i] == '!') 
			{
				total_sentences++;
			}
		}
	}

	cout << "Total Lines: " << total_sentences+1 << endl;
	filereading.close();

	return 0;
}
