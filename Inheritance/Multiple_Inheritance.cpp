#include<iostream>
#include<string>

using namespace std;

class Animal
{
public:
	void eat()
	{
		cout << "This animal eats food " << endl;
	}
};

class Bird
{
public:
	void fly()
	{
		cout << "This bird can fly " << endl;
	}
};

class bat : public Animal, public Bird
{
public:
	void hung()
	{
		cout << "this bat can hung upside down " << endl;
	}
};

int main()
{
	bat b1;

	b1.eat();
	b1.fly();
	b1.hung();

	system("pause");
	return 0;
}