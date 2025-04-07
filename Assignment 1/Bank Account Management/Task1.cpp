#include"BankAccount.h"

int main()
{
	BankAccount account("1234", "Ali", 10000);

	cout << "Account Details: " << endl;
	cout << "Account Number: " << account.getAccountNumber() << endl;
	cout << "Account Holder Name: " << account.getAccountHolderName() << endl;
	cout << "Balance: Rs. " << account.getBalance() << endl;

	char choice;
	cout << "Do you want to change the account holder's name? (y/Y): ";
	cin >> choice;

	if (choice == 'y' || choice == 'Y') 
	{
		char newName[100];
		cout << "Enter new account holder's name: " << endl;
		cin.ignore();
		cin.getline(newName, 100);
		account.setAccountHolderName(newName);
	}

	cout << "Depositing Money: " << endl;
	account.deposit(500);

	cout << "Withdrawing Money " << endl;
	account.withdraw(300);

	cout << "Updated Account Details After Transactions: " << endl;
	cout << "Account Number: " << account.getAccountNumber() << endl;
	cout << "Account Holder Name: " << account.getAccountHolderName() << endl;
	cout << "Balance: Rs" << account.getBalance() << endl;

	return 0;
}