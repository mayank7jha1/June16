#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	/*
		TasK 0:

		Find the 0th  Largest element and
		put that element at its correct position.
		i.e. the n-1 index.

		0th Largest here means Maximum Element.
	*/

	for (int j = 0; j < n - 1; j = j + 1) {
		if (a[j] > a[j + 1]) {
			//Swap These elements:
			int temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl;

	/*
		TasK 1:

		Find the 1th  Largest element and
		put that element at its correct position.
		i.e. the n-2 index.

		1th Largest here means Second Maximum Element.
	*/


	for (int j = 0; j < n - 2; j = j + 1) {
		if (a[j] > a[j + 1]) {
			//Swap These elements:
			int temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}



	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}



	/*
		TasK 2:

		Find the 2th  Largest element and
		put that element at its correct position.
		i.e. the n-3 index.

		2th Largest here means Third Maximum Element.

	*/

	cout << endl;

	for (int j = 0; j < n - 3; j = j + 1) {
		if (a[j] > a[j + 1]) {
			//Swap These elements:
			int temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}



	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}



	/*
		TasK 3:

		Find the 3th  Largest element and
		put that element at its correct position.
		i.e. the n-4 index.

		3th Largest here means Fourth Maximum Element.

	*/


	cout << endl;

	for (int j = 0; j < n - 4; j = j + 1) {
		if (a[j] > a[j + 1]) {
			//Swap These elements:
			int temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}



	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}



	/*
		TasK 4:

		Find the 3th  Largest element and
		put that element at its correct position.
		i.e. the n-5 index.

		4th Largest here means Fifth Maximum Element.

	*/




}