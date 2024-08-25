#include<iostream>
using  namespace std;


int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[10001] {0};


	int q;
	cin >> q;

	while (q > 0) {

		int l, r, s;
		cin >> l >> r >> s;

		pre[l] = pre[l] + s;
		pre[r + 1] = pre[r + 1] - s;

		q = q - 1;
	}


	//Take the prefix sum.
	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + pre[i];
	}

	//Orginal Array Add:

	for (int i = 0; i < n; i = i + 1) {
		a[i] = a[i] + pre[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}


	cout << endl;
}








