#include<iostream>
using  namespace std;

int main() {

	char ch;
	int x = 0;
	int y = 0;

	while (cin >> ch) {

		if (ch == 'S') {
			y = y - 1;
		} else if (ch == 'N') {
			y = y + 1;
		} else if (ch == 'E') {
			x = x + 1;
		} else {
			x = x - 1;
		}
	}

	cout << x << " " << y << endl;

	//Check if We have E or W.

	if (x > 0) {
		//We have E in our answer.
		int i = 1;
		while (i <= x) {
			cout << 'E';
			i = i + 1;
		}

		if (y > 0) {
			//We have N in our answer.
			int i = 1;

			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}

		} else {

			//We have S in our answer.
			int i = 1;
			y = y * -1;

			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}
		}

	} else {


		if (y > 0) {
			//We have N in our answer.
			int i = 1;

			while (i <= y) {
				cout << 'N';
				i = i + 1;
			}

		} else {

			//We have S in our answer.
			int i = 1;
			y = y * -1;

			while (i <= y) {
				cout << 'S';
				i = i + 1;
			}
		}

		//We have W in our answer.
		int i = 1;
		x = x * -1;
		while (i <= x) {
			cout << 'W';
			i = i + 1;
		}

	}

}























