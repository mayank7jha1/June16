#include<iostream>
using  namespace std;

int main() {


	// //Break
	// for (int j = 0; j < 4; j = j + 1) {
	// 	for (int i = 0; i < 4; i = i + 1) {
	// 		if (i == 2) {
	// 			break;
	// 		}
	// 		cout << i << " ";
	// 	}
	// 	cout << endl;
	// 	cout << j << " ";
	// }
	// cout << endl;
	// //Continue:

	// for (int i = 1; i < 4; i = i + 1) {

	// 	if (i == 3) {
	// 		cout << "Above ALL" << endl;
	// 		continue;
	// 		cout << "Below ALL" << i << endl;
	// 		cout << "Checker" << i << endl;
	// 	}

	// 	cout << "Sup" << i << endl;
	// }


	// cout << endl << endl << endl;

	cout << "Continue " << endl;
	for (int i = 1; i <= 3; i = i + 1) {

		for (int  j = 1; j <= 4; j = j + 1) {

			if (j == 3) {
				continue;
				cout << "Sorryy" << " ";
			}

			cout << j << " ";
		}

		cout << i << endl;
	}


	cout << endl << "Break" << endl;

	for (int i = 1; i <= 3; i = i + 1) {

		for (int  j = 1; j <= 4; j = j + 1) {

			if (j == 3) {
				break;
				cout << "Sorryy" << " ";
			}

			cout << j << " ";
		}

		cout << i << endl;
	}
}

















