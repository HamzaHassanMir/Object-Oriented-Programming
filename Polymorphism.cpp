#include<iostream>
using namespace std;

class Payment
{
public:
	virtual void processPayment(double amount) = 0;
};

class CreditCard :public Payment
{
public:
	void processPayment(double amount)
	{
		cout << "Processing Credit card payment of $ " << amount << endl;
	}
};

class Paypal :public Payment
{
public:
	void processPayment(double amount)
	{
		cout << "Processing PayPal payment of $" << amount << endl;
	}
};
class Bitcoin : public Payment 
{
public:
	void processPayment(double amount) 
	{
		cout << "Processing Bitcoin payment of $" << amount << endl;
	}
};

void makePayment(Payment* obj, double amount)
{
	obj->processPayment(amount);
}

int main()
{
	CreditCard c1;
	Paypal p1;
	Bitcoin b1;

	makePayment(&c1, 300.96);
	makePayment(&p1, 75.20);

	return 0;
}