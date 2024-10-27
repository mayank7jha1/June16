#include<iostream>
#include<cstring>
using  namespace std;


class Car {

	//Data Members
private:
	int Price = 100000000;

public:
	char name[100];
	string color;
	int Model;
	double Mileage;

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

	//cout << x.Get_Price() << endl;

}