#include<iostream>
#include<climits>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	int mini = INT_MAX;
	int maxi = INT_MIN;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}
		if (a[i] < mini) {
			mini = a[i];
		}
	}

	int freq[maxi - mini + 1] {0};

	for (int i = 0; i < n; i = i + 1) {
		int element = a[i];
		int shifted_element = element - mini;
		freq[shifted_element] = freq[shifted_element] + 1;
	}


	for (int i = 0; i < maxi - mini + 1; i = i + 1) {
		//freq array ka i orr index is the shifted element.
		if (freq[i] > 0) {
			//I want to print the element not the
			//shifted element.

			int element = i + mini;
			cout << element << " " << freq[i] << endl;
		}
	}




}











