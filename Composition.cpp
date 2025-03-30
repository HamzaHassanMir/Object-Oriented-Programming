#include<iostream>
using namespace std;

class Engine
{
public:
	Engine()
	{
		cout << "Engine Object is created " << endl;
	}
	void start() 
	{
		cout << "Engine started!" << endl; 
	}
	~Engine()
	{
		cout << "Engine destroyed." << endl;
	}
};

class Car
{
private:
	Engine e1;
public:
	Car()
	{
		cout << "Car created." << endl;
	}
	void startCar() 
	{
		e1.start();  // Car controls Engine 
		cout << "Car is moving!" << endl;
	}
	~Car() 
	{
		cout << "Car destroyed." << endl; 
	}
};

int main()
{
	Car mycar;

	mycar.startCar();

	return 0;
}