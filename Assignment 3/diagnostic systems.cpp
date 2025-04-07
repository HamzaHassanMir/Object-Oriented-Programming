#include <iostream>
#include <string>

using namespace std;

class DiagnosticSystem
{
public:
	virtual bool detectIssue() = 0;

	void generateAlert()
	{
		if (detectIssue())
		{
			cout << "Issue Detected" << endl;
		}
		else
		{
			cout << "No Issue Detected" << endl;
		}
	}

	virtual ~DiagnosticSystem(){}
};

class Car : public DiagnosticSystem
{
private:
	int temperature;

public:
	Car(int t)
	{
		temperature = t;
	}

	bool detectIssue() override
	{
		return temperature > 100;
	}
};

class Airplane : public DiagnosticSystem
{
private:
	int altitude;

public:
	Airplane(int a)
	{
		altitude = a;
	}

	bool detectIssue() override
	{
		return altitude > 1000;
	}
};

class Ship : public DiagnosticSystem
{
private:
	int waterlevel;

public:
	Ship(int w)
	{
		waterlevel = w;
	}

	bool detectIssue() override
	{
		return waterlevel > 10;
	}
};

int main()
{
	int temp;
	cout << "Enter car engine temperature: ";
	cin >> temp;

	int alt;
	cout << "Enter airplane altitude: ";
	cin >> alt;

	int level;
	cout << "Enter ship water level: ";
	cin >> level;

	DiagnosticSystem* arr[3];

	arr[0] = new Car(temp);
	arr[1] = new Airplane(alt);
	arr[2] = new Ship(level);

	for (int i = 0; i < 3; i++)
	{
		arr[i]->generateAlert(); 
	}
	for (int i = 0; i < 3; i++)
	{
		delete arr[i];
		arr[i] = nullptr;
	}
	system("pause");
	return 0;
}