#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;


	while (i <= n) {

		//I want to print the spaces.

		int j = 1;

		while (j < i) {
			cout << " ";
			j = j + 1;
		}

		if (j == i) {
			cout << "*";
		}

		cout << endl;
		i = i + 1;
	}

}






