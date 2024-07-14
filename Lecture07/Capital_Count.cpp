#include<iostream>
using  namespace std;

int main() {


	// char ch;

	// cin >> ch;
	// cout << ch << endl;

	// while (cin.get(ch)) {
	// 	cout << ch;
	// }


	int capital = 0, small = 0, extra = 0;

	char ch;

	while (cin.get(ch)) {

		if (ch >= 'A' and ch <= 'Z') {
			capital = capital + 1;
		} else if (ch >= 97 and ch <= 122) {
			small = small + 1;
		} else {
			extra = extra + 1;
		}

	}

}








