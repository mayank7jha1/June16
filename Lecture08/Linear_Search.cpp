#include<iostream>
#include<climits>
using  namespace std;

int main() {

	int n;
	cin >> n;


	int b[n];

	//Input for my array.
	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}

	int key;
	cin >> key;


	//I Have to search for key inside this array.

	//Do this using flag.
	// for (int i = 0; i < n; i = i + 1) {
	// 	if (b[i] == key) {
	// 		cout << "Yes" << endl;
	// 		return 0;
	// 	}
	// }

	// cout << "No" << endl;


	// int maxi = INT_MIN;

	// for (int i = 0; i < n; i = i + 1) {
	// 	if (b[i] > maxi) {
	// 		maxi = b[i];
	// 	}
	// }

	// cout << maxi << endl;


	// int mini = INT_MAX;

	// for (int i = 0; i < n; i = i + 1) {
	// 	if (b[i] < mini) {
	// 		mini = b[i];
	// 	}
	// }

	// cout << mini << endl;


	int maxi = INT_MIN, mini = INT_MAX;
	int sum = 0;

	for (int i = 0; i < n; i = i + 1) {

		//Current element is b[i].

		if (b[i] > maxi) {
			maxi = b[i];
		}

		if (b[i] < mini) {
			mini = b[i];
		}

		sum = sum + b[i];

	}

	cout << maxi << endl;
	cout << mini << endl;
	cout << sum << endl;


	//Reverse Print Karna hain.
	for (int i = n - 1; i >= 0; i = i - 1) {
		cout << b[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i = i + 1) {
		cout << b[i] << " ";
	}


	//Actual Reverse:

	for (int i = 0, j = n - 1; i < j; i = i + 1, j = j - 1) {

		//swap a[i],a[j]

		int temp = b[i];
		b[i] = b[j];
		b[j] = temp;

	}
	cout << endl;

	for (int i = 0; i < n; i = i + 1) {
		cout << b[i] << " ";
	}

}
























