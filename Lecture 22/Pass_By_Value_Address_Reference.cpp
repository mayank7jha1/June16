#include<iostream>
using  namespace std;

//Pass By Value
void Solve(int x, int y) {
	x = x + 100;
	y = y + 200;
}

//Pass By Address
void Solve1(int *x, int* y) {
	*x = *x + 100;
	*y = *y + 200;
}

//Pass By Reference
void Solve2(int &x, int &y) {
	x = x + 100;
	y = y + 200;
}

int main() {

	int a = 54;
	int b = 769;

	cout << a << " " << b << endl;

	//Solve(a, b);
	//Solve1(&a, &b);
	Solve2(a, b);

	cout << a << " " << b << endl;


}












