#include <iostream>
#include <string>

using namespace std;

class Product 
{
private:
	int id;
	string name;
	double price;
	int quantity;

public:
	Product(int id, string name, double price, int quantity) 
	{
		this->id = id;
		this->name = name;
		this->price = price;
		this->quantity = quantity;
	}

	int getId() const { return id; }
	void setId(int id) { this->id = id; }

	string getName() const { return name; }
	void setName(string name) { this->name = name; }

	double getPrice() const { return price; }
	void setPrice(double price) { this->price = price; }

	int getQuantity() const { return quantity; }
	void setQuantity(int quantity) { this->quantity = quantity; }

	void displayDetails() 
	{
		cout << "Product ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Quantity: " << quantity << endl;
	}

	void updateQuantity(int newQuantity) 
	{
		quantity = newQuantity;
	}
};

int main() 
{
	Product laptop(1, "Laptop", 1200.00, 5);
	Product smartphone(2, "Smartphone", 800.00, 10);
	Product tablet(3, "Tablet", 500.00, 20);

	cout << "Laptop Details:" << endl;
	laptop.displayDetails();
	cout << endl;

	cout << "Smartphone Details:" << endl;
	smartphone.displayDetails();
	cout << endl;

	cout << "Tablet Details:" << endl;
	tablet.displayDetails();
	cout << endl;

	return 0;
}