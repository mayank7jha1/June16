#include<iostream>
#include<cstring>
using  namespace std;


class Car {

	/*
		We have certain Properties with this DT that is
		defined using data members and member functions.
	*/

	//Data Members
private:
	int Paisa = 100000000;
public:
	char name[100];
	string color;
	int Model;
	double Mileage;

	//Access Modifiers:

	/*
		Public:
		Private:
		Protected:
	*/


	//Member Function:
	void Print() {

		cout << "Name      : " << name << endl;
		cout << "Color     : " << color << endl;
		cout << "Model     : " << Model << endl;
		cout << "Mileage   : " << Mileage << endl;
		cout << "Money     : " << Paisa << endl;

	}


};

int main() {

	Car x;//This is an Object/Variable of the class/data type
	//Car.
	strcpy(x.name, "BMW");
	x.color = "Black";
	x.Model = 2024;
	x.Mileage = 15;

	x.Print();

}