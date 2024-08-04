#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int b[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}

	int countB = 0;

	//Bubble Sort Code:
	for (int i = 0; i < n - 1; i = i + 1) {

		countB = countB + 1;
		int flag = 0;
		for (int j = 0; j < n - i - 1; j = j + 1) {

			countB = countB + 1;

			if (a[j] > a[j + 1]) {
				flag = 1;

				countB = countB + 1;
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}

		}

		countB = countB + 1;
		if (flag == 0) {
			break;
		}
	}


	int countS = 0;

	//Selection Sort Code:
	for (int i = 0; i < n - 1; i = i + 1) {
		int SEI = i;
		countS = countS + 1;

		for (int j = i + 1; j < n; j = j + 1) {
			countS = countS + 1;
			if (b[j] < b[SEI]) {
				SEI = j;
			}
		}

		countS = countS + 1;
		int temp = b[SEI];
		b[SEI] = b[i];
		b[i] = temp;
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i = i + 1) {
		cout << b[i] << " ";
	}


	//cout << countB << " " << countS << endl;



}