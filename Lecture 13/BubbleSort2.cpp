#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//I have to perform from 0 to n-2 index
	//some tasks.

	for (int i = 0; i < n - 1; i = i + 1) {

		// cout << "I am Doing Task " << i << endl;

		/*
			I am Doing Task i.

			By  the same logic:


			Find the 0th  Largest element and
			put that element at its correct position.
			i.e. the n-1 index.

			0th Largest here means Maximum Element.


			Find the 1th  Largest element and
			put that element at its correct position.
			i.e. the n-2 index.

			1th Largest here means Second Maximum Element.


			ith Task Uska Matlab:
			if i=1

			Find the ith  Largest element and
			put that element at its correct position.
			i.e. the n-i-1 index.

			ith Largest here means (i+1)th  Maximum Element.


			TasK 2:

			Find the 2th  Largest element and
			put that element at its correct position.
			i.e. the n-3 index.

			2th Largest here means Third Maximum Element.

			Generalised Statement:
			if i==2:

			Find the ith  Largest element and
			put that element at its correct position.
			i.e. the n-i-1 index.

			ith Largest here means (i+1)th Maximum Element.

		*/

		for (int j = 0; j < n - i - 1; j = j + 1) {
			if (a[j] > a[j + 1]) {
				//Swap These elements:
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}