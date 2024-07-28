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

	int pre[n] {0};
	pre[0] = a[0];

	int maxi = INT_MIN, mini = INT_MAX;

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];

		if (maxi < pre[i]) {
			maxi = pre[i];
		}
		if (mini > pre[i]) {
			mini = pre[i];
		}
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int freq[maxi - mini + 1] {0};

	for (int i = 0; i < n; i = i + 1) {
		int element = pre[i];
		int shifted_element = element - mini;
		freq[shifted_element] = freq[shifted_element] + 1;
	}


	for (int i = 0; i < maxi - mini + 1; i = i + 1) {
		if (freq[i] > 0) {
			int element = i + mini;
			cout << element << " " << freq[i] << endl;
		}
	}

	for (int i = 0; i < maxi - mini + 1; i = i + 1) {

		int shifted_element = i;
		int element = i + mini;

		if (i + mini == 0 and freq[i] > 0) {
			cout << "YES" << endl;
			return 0;
		} else if (freq[i] > 1) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;




}