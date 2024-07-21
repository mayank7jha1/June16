#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;


	int b[n];


	// cin >> b[0];
	// cin >> b[1];
	// cin >> b[2];
	// cin >> b[3];
	// cin >> b[4];

	//Input for my array.
	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}

	//Output of my array.
	for (int i = 0; i < n; i = i + 1) {
		cout << b[i] << " ";
	}
}