#include<iostream>
using  namespace std;




int main() {
	int n1;
	cin >> n1;

	int n = 2 * n1;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Bubble Sort
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


	if (a[0] == a[2 * n - 1]) {
		cout << -1 << endl;
		return 0;
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}