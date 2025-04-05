/*What is the Diamond Problem?

The diamond problem is an ambiguity that arises in languages supporting multiple inheritance 
when a class inherits from two or more classes that themselves share a common base class.

The C++ Solution: Virtual Inheritance
C++ solves the diamond problem using virtual inheritance
*/

#include <iostream>
using namespace std;

class A
{
public:
	void printA()
	{
		cout << "This is Class A" << endl;
	}
};

class B :virtual public A
{
public:
	void printB()
	{
		cout << "This is Class B" << endl;
	}
};

class C :virtual public A
{
public:
	void printC()
	{
		cout << "This is Class C" << endl;
	}
};

class D :virtual public A, public B, public C{
public:
	void printD()
	{
		cout << "This is Class D" << endl;
	}
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	cout << "class A: " << endl;
	a.printA();
	cout << endl;

	cout << "class B" << endl;
	b.printA();
	b.printB();
	cout << endl;

	cout << "class C" << endl;
	c.printA();
	c.printC();
	cout << endl;

	cout << "Class D: " << endl;
	d.printA();
	d.printB();
	d.printC();
	d.printD();

	return 0;
}