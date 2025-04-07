#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
public:

	void start()
	{
		cout << "Vehicle start" << endl;
	}
	void stop()
	{
		cout << "Vehicle stop " << endl;
	}

};

class Car:public Vehicle
{
public:
	void honk()
	{
		cout << "honk" << endl;
	}
};


class Engine
{
public:
	void checkEngine()
	{
		cout << "Engine is in good condition" << endl;
	}
};

class ElectricCar :public Car, public Engine
{
public:
	void charge()
	{
		cout << "Electric car is charging" << endl;
	}
};

int main()
{
	ElectricCar tesla;

	tesla.start();
	tesla.honk();
	tesla.checkEngine();
	tesla.charge();
	tesla.stop();

	system("pause");
	return 0;
}