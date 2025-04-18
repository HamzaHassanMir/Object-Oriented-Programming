#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
	ifstream inFile("word.txt");
	ofstream outFile("palindrome.txt");
	if (!inFile.is_open() || !outFile.is_open()) 
	{
		cout << "Error opening files!" << endl;
		return 1;
	}

	char word[100];
	inFile >> word;
	int maxLength = 0;
	int start = 0;

	for (int i = 0; word[i] != '\0'; ++i) 
	{
		for (int j = i; word[j] != '\0'; ++j) 
		{
			int left = i;
			int right = j;
			bool isPalindrome = true;

			while (left < right) 
			{
				if (word[left] != word[right]) 
				{
					isPalindrome = false;
					break;
				}
				++left;
				--right;
			}

			if (isPalindrome && (j - i + 1) > maxLength) 
			{
				maxLength = j - i + 1;
				start = i;
			}
		}
	}

	if (maxLength >= 3) 
	{
		for (int i = start; i < start + maxLength; ++i) 
		{
			outFile << word[i];
		}
		outFile << " " << maxLength << endl;
		cout << "Word is palindrome " << endl;
	}
	else 
	{
		outFile << "No palindrome" << endl;
		cout << "Word is not palindrome" << endl;
	}


	inFile.close();
	outFile.close();
	return 0;
}