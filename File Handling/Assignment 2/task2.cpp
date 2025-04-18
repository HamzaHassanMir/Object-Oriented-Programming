#include <iostream>
#include <fstream>
using namespace std;

void replacePattern(char str[], const char pat[], const char rpat[]) {
	int strLen = 0;
	while (str[strLen] != '\0') strLen++;

	int patLen = 0;
	while (pat[patLen] != '\0') patLen++;

	int rpatLen = 0;
	while (rpat[rpatLen] != '\0') rpatLen++;

	for (int i = 0; i <= strLen - patLen; ++i) {
		bool match = true;
		for (int j = 0; j < patLen; ++j) {
			if (str[i + j] != pat[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			for (int j = 0; j < rpatLen; ++j) {
				str[i + j] = rpat[j];
			}
			for (int j = i + rpatLen; j <= strLen - patLen + rpatLen; ++j) {
				str[j] = str[j + patLen - rpatLen];
			}
			strLen += rpatLen - patLen;
			i += rpatLen - 1;
		}
	}
	str[strLen] = '\0';
}

int main() 
{
	ifstream inputFile("input.txt");
	if (!inputFile) 
	{
		cout << "Error: Unable to open input file." << endl;
		return 1;
	}

	const int MAX_SIZE = 1000; 
	char originalTxt[MAX_SIZE];
	char pat[MAX_SIZE];
	char rpat[MAX_SIZE];

	inputFile.getline(originalTxt, MAX_SIZE);

	cout << "Enter the pat: ";
	cin.getline(pat, MAX_SIZE);

	cout << "Enter the rpat: ";
	cin.getline(rpat, MAX_SIZE);

	replacePattern(originalTxt, pat, rpat);

	cout << "Modified text: " << originalTxt << endl;

	return 0;
}
