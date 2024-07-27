#include<iostream>
using  namespace std;





int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[n] {0}, suffix[n] {0};

	pre[0] = 1;
	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] * a[i - 1];
	}

	suffix[n - 1] = 1;
	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix[i] = a[i + 1] * suffix[i + 1];
	}

	int product[n] {0};

	for (int i = 0; i < n; i = i + 1) {
		product[i] = pre[i] * suffix[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << product[i] << " ";
	}

}







