#include <iostream>
using namespace std;

class Parent{
public:
	virtual void display(){
		cout << "Parent class" << endl;
	}
};

class Child1 : public Parent{
public:
	void display(){
		cout << "Child class1" << endl;
	}
};

class Child2 : public Parent{
public:
	void display(){
		cout << "Child class2" << endl;
	}
};

int main(){
	Parent *ptr[5];
	int select;

	cout << "Enter 1 for Parent class, 2 for child 1 and 3 for child2: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> select;
		if (select == 1)
			ptr[i] = new Parent;
		if (select == 2)
			ptr[i] = new Child1;
		if (select == 3)
			ptr[i] = new Child2;
	}
	
	for (int i = 0; i < 5;i++)
		ptr[i]->display();

	system("pause");
	return 0;
}
