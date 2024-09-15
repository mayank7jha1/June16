#include<iostream>
using  namespace std;

int main() {

	int x = 10;
	int *p = new int{107};
	int *q = new int(345);


	int a[3];
	int b[4] {1, 2, 3, 5};

	int *c = new int[3];
	int *d = new int[4] {1, 2, 4, 5};


	int *l = new int[] {4, 1, 2, 3, 5, 6, 7};


	delete p;
	delete[]d;

	cout << d[2] << endl;

	c = new int[10];


}