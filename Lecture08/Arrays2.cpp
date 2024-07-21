#include<iostream>
using  namespace std;

int main() {

	int a[10] {1, 2, 3, 4, 5};
	int b[] {1, 2, 3, 4, 5};
	int c[10] {0};
	int d[10] {};


	//Value at address b+0.
	cout << b[0] << endl;

	//Value at address b+1.
	cout << b[1] << endl;

	//Value at address b+2.
	cout << b[2] << endl;

	//Value at address b+3.
	cout << b[3] << endl;

	//Value at address b+4.
	cout << b[4] << endl;


	//Why don't: a+i where i goes from
	//0 to n-1 where n is the size of the array.



	for (int i = 0; i < 5; i = i + 1) {

		//Traversal :
		cout << a[i] << " ";
	}

}


















