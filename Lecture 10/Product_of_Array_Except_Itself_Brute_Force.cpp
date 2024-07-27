#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	for (int j = 0; j < n; j = j + 1) {
		int Product = 1;
		for (int i = 0; i < n; i = i + 1) {
			if (i != j) {
				Product = Product * a[i];
			}
		}
		cout << Product << " ";
	}
}











