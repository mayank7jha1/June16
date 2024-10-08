#include<iostream>
using  namespace std;
int n;
char output[10001];

void F(int i, int Ob, int Cb) {

	if (i == 2 * n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}

	//Put the Closing Bracket in the current index.
	if (Cb < Ob) {
		output[i] = ')';
		F(i + 1, Ob, Cb + 1);
	}

	//Put the Opening Bracket in the current index.
	if (Ob < n) {
		output[i] = '(';
		F(i + 1, Ob + 1, Cb);
	}
}

int main() {
	cin >> n;

	//Starting Point
	F(0, 0, 0);
}