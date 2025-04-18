#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	const int ARRAY_SIZE = 10;
	int myArray[ARRAY_SIZE];

	ifstream inputFile("Input.txt");
	if (!inputFile) 
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	for (int i = 0; i < ARRAY_SIZE; ++i) 
	{
		inputFile >> myArray[i];
	}

	inputFile.close();

	const int FIRST_HALF_SIZE = ARRAY_SIZE / 2;
	const int SECOND_HALF_SIZE = ARRAY_SIZE - FIRST_HALF_SIZE;

	int firstHalf[FIRST_HALF_SIZE];
	int secondHalf[SECOND_HALF_SIZE];

	for (int i = 0; i < FIRST_HALF_SIZE; ++i) 
	{
		firstHalf[i] = myArray[i];
		cout << firstHalf[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < SECOND_HALF_SIZE; ++i) 
	{
		secondHalf[i] = myArray[FIRST_HALF_SIZE + i];
		cout << secondHalf[i]<<" ";
	}
	cout << endl;

	for (int i = 0; i < FIRST_HALF_SIZE - 1; ++i) 
	{
		for (int j = 0; j < FIRST_HALF_SIZE - i - 1; ++j) 
		{
			if (firstHalf[j] > firstHalf[j + 1]) 
			{
				int temp = firstHalf[j];
				firstHalf[j] = firstHalf[j + 1];
				firstHalf[j + 1] = temp;
			}
		}
	}
	for (int i = SECOND_HALF_SIZE; i < ARRAY_SIZE - 1; ++i) 
	{
		for (int j = SECOND_HALF_SIZE; j < ARRAY_SIZE - i + SECOND_HALF_SIZE - 1; ++j) 
		{
			if (secondHalf[j] > secondHalf[j + 1]) 
			{
				int temp = secondHalf[j];
				secondHalf[j] = secondHalf[j + 1];
				secondHalf[j + 1] = temp;
			}
		}
	}

	ofstream outputFile("output.txt");
	if (!outputFile) 
	{
		cout << "Error creating output file." << endl;
		return 1;
	}
	cout << "Writing in file." << endl;
	cout << "first half is written as: " << endl;
	for (int i = 0; i < FIRST_HALF_SIZE; ++i) 
	{
		outputFile << firstHalf[i] << " ";
		cout << firstHalf[i] << " ";
	}
	cout << endl;
	cout << "Second half is written as: " << endl;
	for (int i = 0; i < SECOND_HALF_SIZE; ++i) 
	{
		outputFile << secondHalf[i] << " ";
		cout << secondHalf[i] << " ";
	}

	outputFile.close();


	return 0;
}
