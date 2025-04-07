#include<iostream>
#include<string>

using namespace std;

class Animal
{
private:

public:

	void eat()
	{
		cout << "This animal eats food " << endl;
	}
};

class Mammal : public Animal
{
public:
	void walk()
	{
		cout << "This animal walks " << endl;
	}
};

class Dog : public Mammal
{
public:
	void bark()
	{
		cout << "This dog can bark " << endl;
	}
};

int main()
{
	Dog d1;
	d1.eat();
	d1.walk();
	d1.bark();

	system("pause");
	return 0;
}