#include <iostream>
using namespace std;

// Forward declaration
class A;

class B
{
public:
	 int sum(A);
	 int sub(A);
};

class A
{
	int i;
	int j;
public:
	A(int, int);
	~A();
	//friend int sum(A);	// for general functions
	//friend int B::sum(A);	// for member function
	//friend int B::sub(A);	// for member function
	friend class B;			// Make whole class as friend
};
