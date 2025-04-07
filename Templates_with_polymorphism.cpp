#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	virtual void show()
	{
		cout << "This is Base Class" << endl;
	}
	virtual ~Base(){}
};

template<class T>
class Derived:public Base<T>
{
public:
	void show()
	{
		cout << "This is Derived Class" << endl;
	}
};


int main()
{
	Base<int>* ptr = new Derived<int>();
	ptr->show();
	ptr->Base<int>::show();
	delete ptr;
	ptr = nullptr;

	return 0;
}