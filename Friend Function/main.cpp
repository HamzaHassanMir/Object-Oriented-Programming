#include "A.h"

int main()
{
	A obj2(4, 5);
	//cout << "The sum of i and j is: "<<sum(obj) << endl;
	B obj1;
	cout << "The sum of i and j is: " << obj1.sum(obj2) << endl;
	cout << "The diff of i and j is: " << obj1.sub(obj2) << endl;

	system("pause");
	return 0;
}