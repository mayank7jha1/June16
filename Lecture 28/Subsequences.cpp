#include<iostream>
using  namespace std;
char input[10001];
char output[10001];

void F(int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	//Choose the current character.
	output[j] = input[i];
	F(i + 1, j + 1);


	//Skip the current character.
	F(i + 1, j);

}

int main() {
	cin >> input;

	//Starting Point
	F(0, 0);
}