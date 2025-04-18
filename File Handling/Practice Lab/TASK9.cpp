#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char words[50];
	ofstream fout;
	fout.open("input.txt");

	cin.getline(words, 50);
	
	fout << words<<endl;

	int totalWords = 0;
	for (int i = 0; words[i] != '\0'; i++)
	{
		totalWords++;
	}

	fout << "The total words are " << totalWords;
	fout.close();

	return 0;
}
