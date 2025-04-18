#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	const int MAX_NAME_LENGTH = 100; 
	const int NUM_FRIENDS = 5; 

	char friendNames[NUM_FRIENDS][MAX_NAME_LENGTH]; 

	ofstream outputFile("friends.txt"); 
	cout << "Enter the names of five friends:" << std::endl;

	for (int i = 0; i < NUM_FRIENDS; ++i) 
	{
		cin.getline(friendNames[i], MAX_NAME_LENGTH);
		outputFile << friendNames[i] << endl; 
	}

	outputFile.close(); 

	return 0; 
}
