#include<iostream>
using  namespace std;

int main() {


	// &: Address of Operator:

	int x = 10;

	// int y = &x;

	cout << &x << endl;

	//*: Value  of Operator:
	//[]: Value of Operator

	//kisi bhi address ki value.

	cout << *(&x) << endl;



	int a[5];

	cout << *(a + 0) << endl;
	cout << *(a + 1) << endl;

	cout << a[1] << endl;

	cout << a + 2 << endl;



}











