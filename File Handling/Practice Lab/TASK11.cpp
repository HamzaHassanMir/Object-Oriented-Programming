#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	char str[100];
	
	ofstream file("input.txt");
	cin.getline(str, 100);

	file << str;

	int len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}

	int count = 0;
	while (len > 0) 
	{
		if (str[count] != str[len - 1]) 
		{
			break;
		}
		count++;
		len--;
	}

	if (len == 0) 
	{
		file << "The string is a palindrome" << std::endl;
	}
	else 
	{
		file << "The string is not a palindrome" << std::endl;
	}

	file.close();
	return 0;
}