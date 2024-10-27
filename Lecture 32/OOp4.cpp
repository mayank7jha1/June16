#include<iostream>
#include<cstring>
using  namespace std;


/*
	For Every Class you have 4 Self Invoked Functions.
	1. Constructor
	2. Copy Constructor
	3. Copy Assignment Operator
	4. Destructor


	1. Copy Constructor: Helps you to copy all the DM and MF
	   Values of one object into another at its time of creation.
*/

class Car {

	//Data Members
private:
	int Price = 100000000;

public:
	char name[100];
	string color;
	int Model;
	double Mileage;
	char *Condition;

	//Constructor Overloading
	//Default Constructor
	Car() {
		cout << "Default Constructor " << endl;
		Condition = new char[10000];
	}

	//Parametrised Constructor
	Car(char *n) {
		cout << "Parametrised Constructor 1: " << endl;
		Condition = new char[10000];
		strcpy(name, n);
	}

	Car(char *n, string c, int M, double Mil, char *co) {
		cout << "Parametrised Constructor 2: " << endl;
		strcpy(name, n);
		color = c;
		Model = M;
		Mileage = Mil;
		Condition = new char[strlen(co) + 1];
		strcpy(Condition, co);
	}

	//Copy Constructor:
	Car(Car &z) {
		cout << "Copy Constructor : " << endl;
		strcpy(name, z.name);
		color = z.color;
		Model = z.Model;
		Mileage = z.Mileage;

		//Deep Copy
		Condition = new char[strlen(z.Condition) + 1];
		strcpy(Condition, z.Condition);
	}

	//Setter
	void Set_Price(int v) {
		if (v < 90000000) {
			Price = 90000000;
		} else {
			Price = v;
		}
	}

	//Getter
	int Get_Price() {
		return Price;
	}

	//Member Function:
	void Print() {

		cout << "Name      : " << name << endl;
		cout << "Color     : " << color << endl;
		cout << "Model     : " << Model << endl;
		cout << "Mileage   : " << Mileage << endl;
		cout << "Money     : " << Price << endl;
		cout << "Condition : " << Condition << endl;
		cout << "----------------------------" << endl;

	}
};

int main() {

	// Car x;
	// strcpy(x.name, "BMW");
	// x.color = "Black";
	// x.Model = 2024;
	// x.Mileage = 15;
	// strcpy(x.Condition, "Bad");

	// // x.Paisa: I cannot change this.
	// x.Set_Price(90002000);
	// x.Print();


	// Car y("Toyota");
	Car z("Maruti", "White", 800, 24, "Very Good");
	z.Print();

	//Copy Constructor: (Default)
	Car m(z);


	m.Print();
	m.name[0] = 'T';
	m.Condition[0] = 'T';

	z.Print();
	m.Print();


}