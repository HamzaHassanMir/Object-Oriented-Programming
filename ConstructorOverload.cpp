#include<iostream>
using namespace std;


class Myclass
{
private:
	int x, y;

public:
	Myclass()
	{
		x = 0;
		y = 0;
		cout << "Default constructor is called " << endl;
		cout << "X: " << x << ", Y: " << y << endl;
	}
	Myclass(int a, int b)
	{
		x = a;
		y = b;
		cout << "Two argument constructor is called " << endl;
		cout << "X: " << x << ", Y: " << y << endl;
	}
	Myclass(int c)
	{
		x = c;
		cout << "One argument constructor is called " << endl;
		cout << "X: " << x << endl;
	}
};

int main()
{
	Myclass obj1;

	Myclass obj2(12, 13);
	Myclass obj3(14, 15);

	Myclass(17);

	system("pause");
	return 0;
}