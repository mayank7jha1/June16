#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int freq[100005] {0};

	//Iterate over a array and build your
	//frequency array.


	for (int i = 0; i < n; i = i + 1) {
		int element = a[i];
		freq[element] = freq[element] + 1;
	}


	//Print the frequency Array.

	for (int i = 0; i < 100005; i = i + 1) {
		if (freq[i] > 0) {
			cout << i << " " << freq[i] << endl;
		}
	}

}







