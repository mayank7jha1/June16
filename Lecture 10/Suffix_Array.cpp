#include<iostream>
using  namespace std;






int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int suffix[n] {0};

	/*

		2 3 5 7 6

		suffix[4]=a[4];
		suffix[3]=a[3]+a[4]
		suffix[2]=a[2]+a[3]+a[4]

		suffix[n-1]=a[n-1];

		i=2:
		suffix[i]=a[i]+suffix[i+1]
	*/

	// suffix[n - 1] = a[n - 1];

	// for (int i = n - 2; i >= 0; i = i - 1) {
	// 	suffix[i] = a[i] + suffix[i + 1];
	// }


	//Suffix Product:
	// suffix[n - 1] = a[n - 1];

	// for (int i = n - 2; i >= 0; i = i - 1) {
	// 	suffix[i] = a[i] * suffix[i + 1];
	// }


	// Delayed Suffix

	suffix[n - 1] = 1;

	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix[i] = a[i + 1] * suffix[i + 1];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << suffix[i] << " ";
	}


}






