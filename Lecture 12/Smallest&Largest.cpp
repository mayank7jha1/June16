#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int smallest = a[0];

	for (int i = 1; i < n; i = i + 1) {
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}

	cout << smallest << endl;


}