#include<iostream>
#include<cstring>
using  namespace std;


/*
	For Every Class you have 4 Self Invoked Functions.
	1. Constructor
	2. Copy Constructor
	3. Copy Assignment Operator
	4. Destructor


	1. Constructor: To initialise all the DM and MF of your object at the time of its creation.
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

	//Constructor Overloading
	//Default Constructor
	Car() {
		cout << "Default Constructor " << endl;
	}

	//Parametrised Constructor
	Car(char *n) {
		cout << "Parametrised Constructor 1: " << endl;
		strcpy(name, n);
	}

	Car(char *n, string c, int M, double Mil) {
		cout << "Parametrised Constructor 2: " << endl;
		strcpy(name, n);
		color = c;
		Model = M;
		Mileage = Mil;
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
		cout << "----------------------------" << endl;

	}
};

int main() {

	Car x;
	strcpy(x.name, "BMW");
	x.color = "Black";
	x.Model = 2024;
	x.Mileage = 15;

	// x.Paisa: I cannot change this.
	x.Set_Price(90002000);
	x.Print();


	Car y("Toyota");
	Car z("Maruti", "White", 800, 24);

	z.Print();


}