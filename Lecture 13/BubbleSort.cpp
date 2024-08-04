#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	for (int i = 0; i < n - 1; i = i + 1) {
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