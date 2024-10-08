#include<iostream>
using  namespace std;
int n;
char output[11];
int count1 = 0;

void F(int index, char mx) {

	if (index == n) {
		output[index] = '\0';
		cout << output << endl;

		count1 = count1 + 1;
		return;
	}

	for (char ch = 'a'; ch <= mx; ch = ch + 1) {
		output[index] = ch;
		if (ch == mx) {
			F(index + 1, mx + 1);
		} else {
			F(index + 1, mx);
		}
	}
}

int main() {

	cin >> n;

	//Starting Point:
	F(0, 'a');

	//cout << count1 << endl;
}