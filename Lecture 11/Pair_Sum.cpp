#include<iostream>
using  namespace std;





int main() {

	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Print all the pair of the given array.

	for (int i = 0; i < n; i = i + 1) {

		//Print all the pairs that start from i index.
		for (int j = 0; j < n; j = j + 1) {
			cout << a[i] << " " << a[j] << endl;
		}

		cout << endl;
	}

	cout << endl << endl;

	//Print only pair whose sum is equal to target.
	int target;
	cin >> target;

	for (int i = 0; i < n; i = i + 1) {

		//Print all the pairs that start from i index.
		for (int j = 0; j < n; j = j + 1) {

			//Current pair:(a[i],a[j])
			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}

		}
	}

	cout << endl << endl << endl;


	//Print Non Dublicate pair.

	for (int i = 0; i < n; i = i + 1) {

		//Print all the pairs that start from i index.
		for (int j = i; j < n; j = j + 1) {

			//Current pair:(a[i],a[j])
			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}

		}
	}

}