#include <iostream>
using namespace std;

class Student{
	//Attributes
private:
	int age;
	float gpa;
	char *name;

	//Methods
public:
	// Constructors
	Student(){
		cout << "No parameterized constructor" << endl;
		age = 0;
		gpa = 0.0;
		name = NULL;
	}
	Student(int a, float g, char* n){
		cout << "Parameterized constructor" << endl;
		age = a;
		gpa = g;
		//name = n;	// Wrong way to assign pointer i.e shallow copy
		int size = strlen(n);
		name = new char[size + 1];
		for (int i = 0; i < size; i++){
			name[i] = n[i];
		}
		name[size] = '\0';
	}

	// User defined copy constructor
	Student(const Student& obj){
		age = obj.age;
		gpa = obj.gpa;

		int size = strlen(obj.name);
		name = new char[size + 1];
		for (int i = 0; i < size; i++){
			name[i] = obj.name[i];
		}
		name[size] = '\0';
	}

	// Destructors
	~Student(){
		cout << "Destructor called" << endl;
		delete[] name;
	}
	//Setters
	void setAge(int a){
		age = a;
	}
	void setGpa(float g){
		gpa = g;
	}
	void setName(char* n){
		int size = strlen(n);
		name = new char[size + 1];
		for (int i = 0; i < size; i++){
			name[i] = n[i];
		}
		name[size] = '\0';
	}

	//Getters
	int getAge(){
		return age;
	}
	float getGpa(){
		return gpa;
	}
	char* getName(){
		//return name;	// Wrong way to return i.e. Shallow copy
		int size = strlen(name);
		char* tmp = new char[size + 1];
		for (int i = 0; i < size; i++){
			tmp[i] = name[i];
		}
		tmp[size] = '\0';
		return tmp;
	}

};

int main(){
	{
		Student one, two(35, 3.98, "Ali");
		one.setName("Sajid");

		Student three = one;	// Copy constructor
		/*one.setAge(20);
		one.setGpa(2.97);
		two.setAge(30);
		two.setGpa(3.75);*/

		/*	cout << "One age:" << one.getAge() << endl;
		cout << "One GPA:" << one.getGpa() << endl;
		cout << "Two age:" << two.getAge() << endl;
		cout << "Two GPA:" << two.getGpa() << endl;
		char* x = two.getName();

		cout << "Two Name " << x << endl;
		x[0] = 'X';

		cout << "Two Name after chnage " << two.getName() << endl;
		delete[] x;*/
		cout << "Three age:" << three.getAge() << endl;
		cout << "Three GPA:" << three.getGpa() << endl;
		cout << "Three Name:" << three.getName() << endl;
	}

	system("pause");
	return 0;
}