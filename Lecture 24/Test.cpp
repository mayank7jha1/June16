#include<iostream>
using  namespace std;

int main() {
	int x = 10;

	//You cannot change the size of a statically defined array.
	int a[3] {0};

	cout << a[10] << endl;
	cout << *(a + 10) << endl;

	a[10] = 97;

	cout << a[10] << endl;
}