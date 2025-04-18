#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream filereading("Input3.txt");
	if (!filereading) 
	{
		cout << "Error opening file: " << endl;
		return 0;
	}

	cout << "Enter the word you want to check :" << endl;
	char word[100];
	cin.getline(word, 100);

	int count = 0;
	char paragraph[1000];
	char search[100];
	
	while (filereading >> paragraph) 
	{
		int i = 0;
		while (word[i] != '\0' && paragraph[i] != '\0' && word[i] == paragraph[i])
		{
			i++;
		}
		if (word[i] == '\0' && paragraph[i] == '\0')
		{
			count++;
		}
	}


	cout << word << " is repeated " << count+1 << " times." << endl;

	return 0;
}