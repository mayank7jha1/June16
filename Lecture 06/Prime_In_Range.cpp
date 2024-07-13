#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	int j = 2;

	while (i <= n) {

		//Check if the current i is prime or not.

		int flag = 0;

		while (j <= i - 1) {

			if (i % j == 0) {

				//This is Not a Prime Number
				flag = 1;
			}

			j = j + 1;
		}

		if (flag == 0) {
			cout << i << " ";
		}

		i = i + 1;
	}

}






