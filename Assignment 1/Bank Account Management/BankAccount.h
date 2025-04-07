#include<iostream>
using namespace std;

class BankAccount
{
private:
	char* accountNumber;
	char* accountHolderName;
	double balance;

public:
	BankAccount(char* account_num,char* account_holder_name, double balance1);
 
	void setAccountHolderName(char* n);
	void deposit(double amount1);
	void withdraw(double amount2);

	char* getAccountNumber();
	char* getAccountHolderName();
	double getBalance();


	~BankAccount();
};