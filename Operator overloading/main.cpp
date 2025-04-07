#include <iostream>
using namespace std;

class Test
{
	int num1;
	int num2;
public:
	Test();
	Test(int, int);
	Test(const Test&);
	Test operator+(Test&);			// Add operator
	Test operator-(Test&);			// Sub operator
	Test operator+();				// Unary operator
	Test operator-();				// Unary operator
	bool operator==(const Test&);	// Equilaty operator
	Test& operator++();				// pre increment
	Test operator++(int);			// post increment
	friend ostream& operator<<(ostream&, const Test&);	// Stream insertion operator
	friend istream& operator>>(istream&, Test&);		// Stream extraction operator
	Test& operator=(const Test&);	// Assignment operator
	//void display();
};


Test::Test()
{
	num1 = 0;
	num2 = 0;
	//cout << "Default constructor" << endl;
}


Test::Test(int n1, int n2)
{
	num1 = n1;
	num2 = n2;
	//cout << "Parameterized construcor" << endl;
}


Test::Test(const Test& obj)
{
	num1 = obj.num1;
	num2 = obj.num2;
	//cout << "Copy construcor" << endl;
}


Test Test::operator+(Test& obj)		// Add operator
{
	Test res;
	res.num1 = num1 + obj.num1;
	res.num2 = num2 + obj.num2;
	return res;
}


Test Test::operator-(Test& obj)		// Sub operator
{
	Test res;
	res.num1 = num1 - obj.num1;
	res.num2 = num2 - obj.num2;
	return res;
}


Test Test::operator+()				// Unary operator +
{
	return *this;
}


Test Test::operator-()				// Unary operator -
{
	Test res;

	res = *this;
	res.num1 = res.num1*-1;
	res.num2 = res.num2*-1;

	return res;
}

// operators ==, >=, =<, >, <
bool Test::operator==(const Test& obj)	// Equilaty operator
{
	if (num1 == obj.num1 && num2 == obj.num2)
	{
		return true;
	}
	else
		return false;
}


Test& Test::operator++()			// Pre increment
{
	num1 = num1 + 1;
	num2 = num2 + 1;
	return *this;
}


Test Test::operator++(int)			// Post increment
{
	Test res = *this;
	num1 = num1 + 1;
	num2 = num2 + 1;
	return res;
}


/*void Test::display()
{
	cout << "The value of num1 is: " << num1 << endl;
	cout << "The value of num2 is: " << num2 << endl;
}*/


ostream& operator<<(ostream& os, const Test& obj)	// Stream insertion operator
{
	os << "The value of num1 is: " << obj.num1 << endl;;
	os << "The value of num2 is: " << obj.num2;
	return os;
}

istream& operator>>(istream& in, Test& obj)	// Stream extraction operator
{
	cout << "Enter num1: ";
	in >> obj.num1;

	cout << "Enter num1: ";
	in >> obj.num2;
	return in;
}


Test& Test::operator=(const Test& obj)
{
	cout << "Assignment operator: " << endl;
	num1 = obj.num1;
	num2 = obj.num2;
	return *this;
}


int main()
{
	/*Test t1(3, 4);		// Parameterised constructor called
	Test t2;			// Default constructor called

	t1.display();

	t2 = +t1;			//t1.operator+();
	t2.display();

	Test t3;
	t3 = -t2;			//t2.operator-();
	t3.display();

	if (t1 == t2)		//t1.operator==(t2);
		cout << "Equal" << endl;
	else
		cout << "Not equal" << endl;

	Test t4, t5;
	t4 = t1 + t2;		//t1.operator+(t2)
	t5 = t2 - t1;		//t2.operator-(t1)
	t4.display();
	t5.display();

	Test t6 = t1;		// Copy constructor called
	t6 = t1 + t2;*/

	/*Test t1(2, 5);		// Pre-increment
	Test t2;
	//t2 = ++ ++ ++ t1;
	t2 = t1++;			// Post increment
	//t1.display();
	//t2.display();*/

	Test t7;
	cin >> t7;
	cout << t7 << endl;

	Test t8;
	t8 = t7;			// Assignment operator called, not copy constructor
	cout << t8 << endl;

	system("pause");
	return 0;
}