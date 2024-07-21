#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int count = 0;

	for (int i = 0; i < n; i = i + 1) {

		for (int j = i; j < n; j = j + 1) {

			count = count + 1;

			for (int k = i; k <= j; k = k + 1) {
				cout << a[k] << " ";
			}

			cout << endl;
		}
		cout << endl;
	}

	cout << count << endl;
}

















