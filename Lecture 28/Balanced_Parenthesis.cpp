#include<iostream>
using  namespace std;
int n;
char output[10001];

void F(int i) {

	if (i == n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}

	//Put the Opening Bracket in the current index.
	output[i] = '(';
	F(i + 1);

	//Put the Closing Bracket in the current index.
	output[i] = ')';
	F(i + 1);
}



int main() {
	cin >> n;

	//Starting Point
	F(0);
}