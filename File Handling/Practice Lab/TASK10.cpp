#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	
	ifstream inputFile("input.txt");
	
	
	const int numChars = 26; 
	int charFreq[numChars] = { 0 };

	char ch;
	while (inputFile.get(ch)) 
	{
		if (isalpha(ch)) 
		{
			ch = tolower(ch);
			charFreq[ch - 'a']++;
		}
	}

	
	for (int i = 0; i < numChars; ++i) 
	{
		char currentChar = 'a' + i;
		cout << "Character '" << currentChar << "': " << charFreq[i] << " occurrences" << endl;
	}

	inputFile.close();

	return 0;
}
