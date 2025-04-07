#include<iostream>

using namespace std;

template<typename T>
class Base
{
protected:
	T value;
public:
	Base(T val)
	{
		value = val;
	}

	void show()
	{
		cout << "The Values is " << value << endl;
	}
};

template<typename T>
class derived :public Base<T>
{
public:
	derived(T val) :Base<T>(val){}
	void showDerived()
	{
		cout << "Derived value " << this->value << endl;
	}
};

int main()
{
	derived<int> obj(20);
	obj.show();
	obj.showDerived();

	return 0;
}