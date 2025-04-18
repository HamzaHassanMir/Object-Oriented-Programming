#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ifstream filereading("Input4.txt");
	ofstream filewriting("Output4.txt");

	if (!filereading.is_open()) 
	{
		cout << "Error: Unable to open input file." << endl;
		return 1;
	}

	if (!filewriting.is_open()) 
	{
		cout << "Error: Unable to open output file." << endl;
		return 1;
	}

	const int MAX_LENGTH = 100;
	char word1[MAX_LENGTH], word2[MAX_LENGTH];

	
	filereading >> word1 >> word2;

	
	char matchedCharacters[MAX_LENGTH];
	int matchedPositions[MAX_LENGTH];
	int matchedCount = 0;
	for (int i = 0; word1[i] != '\0' && word2[i] != '\0'; ++i) 
	{
		if (word1[i] == word2[i]) 
		{
			matchedCharacters[matchedCount] = word1[i];
			matchedPositions[matchedCount] = i + 1;
			matchedCount++;
		}
	}

	
	filewriting << matchedCharacters << " ";
	for (int i = 0; i < matchedCount; ++i) 
	{
		filewriting << matchedPositions[i];
		if (i < matchedCount - 1) 
		{
			filewriting << " ";
		}
	}
	filewriting << endl;


	cout << "Output has been written to output.txt" << endl;

	filereading.close();
	filewriting.close();

	return 0;
}
