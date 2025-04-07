#include <iostream>

class Counter {
public:
	static int count;

	Counter() { count++; }

	void display() {
		std::cout << "Count: " << count << std::endl;
	}
};

int Counter::count = 0;

int main() {
	Counter c1;
	Counter c2;
	Counter c3;

	c1.display(); // Output: Count: 3
	return 0;
}