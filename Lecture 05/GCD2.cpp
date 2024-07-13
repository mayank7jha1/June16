#include<iostream>
using  namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	// int temp;

	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (b != 0) {
		int z = b;
		b = a % b;
		a = z;
	}

	cout << a << endl;
}




