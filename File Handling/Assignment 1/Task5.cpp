#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	const char hardwareNames[][20] = { "Jigsaw", "Nail", "Hammer", "Wrench", "Screwdriver" };
	double hardwarePrices[] = { 12.0, 5.0, 0.0, 3.0, 6.0 };
	int hardwareQuantities[] = { 10, 6, 0, 7, 4 };
	int hardwareTotalPrices[] = { 1200, 30, 0, 21, 24 };
	cout << "Chart of Hardware is:" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << hardwareNames[i] << " " << hardwarePrices[i] << endl;
	}
	cout << "Enter the item you want to buy: ";
	char itemName[20];
	cin >> itemName;
	int quantity;
	cout << "Enter the quantity: ";
	cin >> quantity;
	int itemIndex = -1;
	for (int i = 0; i < 5; ++i)
	{
		int j;
		for (j = 0; hardwareNames[i][j] != '\0' && itemName[j] != '\0'; ++j)
		{
			if (hardwareNames[i][j] != itemName[j])
			{
				break;
			}
		}
		if (hardwareNames[i][j] == '\0' && itemName[j] == '\0')
		{
			itemIndex = i;
			break;
		}
	}
	if (itemIndex != -1)
	{
		double totalAmount = hardwarePrices[itemIndex] * quantity;
		cout << "Number of " << itemName << ": " << quantity << endl;
		cout << "Amount: " << totalAmount << endl;
		ifstream inFile("Store.txt");
		ofstream outFile("Store.txt");
		for (int i = 0; i < 5; ++i)
		{
			if (i == itemIndex)
			{
				hardwareQuantities[i] -= quantity;
				hardwareTotalPrices[i] -= static_cast<int>(totalAmount);
			}
			outFile << hardwareNames[i] << " " << hardwareQuantities[i] << " " << hardwareTotalPrices[i] << endl;
		}
		inFile.close();
		outFile.close();
		remove("Store.txt");
		rename("Updated_Store.txt", "Store.txt");
	}
	else
	{
		cout << "Item not found in the inventory." << endl;
	}
	return 0;
}
