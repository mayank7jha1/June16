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
		int flag = 0;
		for (int j = 0; j < n - i - 1; j = j + 1) {
			if (a[j] > a[j + 1]) {
				flag = 1;
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

		if (flag == 0) {
			break;
		}
	}


	int sum = 0;

	for (int i = 0; i < n; i = i + 2) {
		sum = sum + a[i];
	}

	cout << sum << endl;

}







