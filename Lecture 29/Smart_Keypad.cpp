#include<iostream>
using  namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" ,
                   "mno", "pqrs" , "tuv", "wxyz"
                 };


char input[11];
char  output[11];

void F(int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	int index = input[i] - '0';

	for (int k = 0; k < table[index].length(); k = k + 1) {
		output[j] = table[index][k];
		F(i + 1, j + 1);
	}
}


int main() {
	cin >> input;
	F(0, 0);
}