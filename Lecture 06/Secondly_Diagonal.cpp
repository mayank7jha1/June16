#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;


	int i = 1;

	while (i <= n) {

		//Spaces:
		int j = 1;

		while (i + j < n + 1) {

			cout << " ";
			j = j + 1;
		}

		//Stars.
		while (i + j >= n + 1 and j <= n) {
			cout << "*";
			j = j + 1;
		}


		cout << endl;
		i = i + 1;
	}
}





