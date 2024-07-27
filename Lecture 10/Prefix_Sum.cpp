#include<iostream>
using  namespace std;





int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[n] {0};

	//Prefix Sum:
	// pre[0] = a[0];
	// for (int i = 1; i < n; i = i + 1) {
	// 	pre[i] = pre[i - 1] + a[i];
	// }


	//Prefix Product:
	// pre[0] = a[0];
	// for (int i = 1; i < n; i = i + 1) {
	// 	pre[i] = pre[i - 1] * a[i];
	// }

	//Delayed Product:

	pre[0] = 1;
	/*
		pre[1]=a[0]
		pre[2]=a[0]*a[1]
		pre[3]=a[0]*a[1]*a[2]

		i=3:
		pre[i]=pre[i-1]*a[2]
		pre[i]=pre[i-1]*a[i-1];
	*/

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] * a[i - 1];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}

}







