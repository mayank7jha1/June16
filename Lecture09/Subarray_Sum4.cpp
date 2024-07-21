#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int count = 0;
	int sum = 0;
	int maxi = INT_MIN;

	for (int i = 0; i < n; i = i + 1) {
		for (int j = i; j < n; j = j + 1) {

			sum = 0;
			count = count + 1;

			for (int k = i; k <= j; k = k + 1) {
				sum = sum + a[k];
			}

			if (maxi < sum) {
				maxi = sum;
			}

			cout << sum << endl;
		}
		cout << endl;
	}

	cout << maxi << endl;
	cout << count << endl;
}

















