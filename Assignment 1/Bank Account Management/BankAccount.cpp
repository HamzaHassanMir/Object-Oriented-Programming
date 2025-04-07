#include "BankAccount.h"


BankAccount::BankAccount(char* account_num, char* account_holder_name, double balance1)
{
	int size = strlen(account_num);
	accountNumber = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		accountNumber[i] = account_num[i];
	}
	accountNumber[size] = '\0';

	int size2 = strlen(account_holder_name);
	accountHolderName = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		accountHolderName[i] = account_holder_name[i];
	}
	accountHolderName[size] = '\0';

	balance = balance1;

}

void BankAccount::setAccountHolderName(char*n)
{
	int size = strlen(n);
	accountHolderName = new char[size + 1];
	for (int i = 0; i < size; i++){
		accountHolderName[i] = n[i];
	}
	accountHolderName[size] = '\0';
}

void BankAccount::deposit(double amount1)
{
	if (amount1 > 0)
	{
		balance = balance + amount1;
		cout << "You have deposited Rs. " << amount1 << endl;
	}
	else
	{
		cout << "Invalid negative value can not be deposited." << endl;
	}
}

void BankAccount::withdraw(double amount2)
{
	if (balance > 0 && amount2 < balance)
	{
		balance = balance - amount2;
		cout << "You have withdraw Rs. " << amount2 << endl;
	}
	else
	{
		cout << "Invalid funds are not sufficient." << endl;
	}
}

char* BankAccount::getAccountHolderName()
{
	int size = strlen(accountHolderName);
	char* temp = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = accountHolderName[i];
	}
	temp[size] = '\0';

	return temp;
}

char* BankAccount::getAccountNumber()
{
	int size = strlen(accountNumber);
	char* temp = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = accountNumber[i];
	}
	temp[size] = '\0';

	return temp;
}

double BankAccount::getBalance()
{
	return balance;
}

BankAccount::~BankAccount()
{
	delete[] accountHolderName;
	delete[] accountNumber;
}
