#include<iostream>
using  namespace std;

int main() {

	// int n;
	// cin >> n;

	// int a[n];
	// for (int i = 0; i < n; i = i + 1) {
	// 	cin >> a[i];
	// }

	// //Print The options that can be treated
	// //as the starting point of the triplets.

	// for (int i = 0; i < n - 2; i = i + 1) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// //Print The options that can be treated
	// //as the second point of the triplets.
	// for (int j = 1; j < n - 1; j = j + 1) {
	// 	cout << a[j] << " ";
	// }

	// cout << endl;

	// //Print The options that can be treated
	// //as the third point of the triplets.
	// for (int k = 2; k < n; k = k + 1) {
	// 	cout << a[k] << " ";
	// }

	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		int flag = 0;

		for (int i = 0; i < n - 2; i = i + 1) {
			//First Point of my  triplet is: a[i]:

			for (int j = i + 1; j < n - 1; j = j + 1) {
				//Second Point of my triplet is: a[j]:

				for (int k = j + 1; k < n; k = k + 1) {
					//Third Point of my triplet is: a[k]:

					if ((a[i] + a[j] + a[k]) % 10 == 3) {
						flag = 1;
						break;
					}
				}

				if (flag == 1) {
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}



		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

		t = t - 1;
	}
}






