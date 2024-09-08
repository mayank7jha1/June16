#include<iostream>
using  namespace std;

void Sum(int *p) {

	cout << p << endl;
	cout << p + 1 << endl;
	cout << *(p + 2) << endl;
	cout << p[2] << endl;

	p[2] = 1234;

}

void Sum2(int p1[]) {

}

int main() {
	int a[] {10, 20, 30, 40, 50};
	cout << a << endl;
	cout << (a + 1) << endl;
	cout << a[1] << endl;
	cout << a + 2 << endl;

	//Arrays are by default passed by address.
	Sum(a);

	cout << a[2] << endl;
}



