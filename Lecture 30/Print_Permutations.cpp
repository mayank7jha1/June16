#include<iostream>
using  namespace std;

string s;

void Permute(string s, int index) {

	if (index == s.length()) {
		cout << s << endl;
		return;
	}

	for (int k = index; k < s.length(); k = k + 1) {
		swap(s[index], s[k]);
		Permute(s, index + 1);
	}
}


void Permute2(int index) {

	if (index == s.length()) {
		cout << s << endl;
		return;
	}

	for (int k = index; k < s.length(); k = k + 1) {
		swap(s[index], s[k]);
		Permute2(index + 1);
	}
}


void Permute3(string &s, int index) {

	if (index == s.length()) {
		cout << s << endl;
		return;
	}

	for (int k = index; k < s.length(); k = k + 1) {
		swap(s[index], s[k]);
		Permute3(s, index + 1);
	}
}


void Permute4(char s[], int index) {

	//int n = strlen(s);

	if (s[index] == '\0') {
		cout << s << endl;
		return;
	}

	for (int k = index; s[k] != '\0'; k = k + 1) {
		swap(s[index], s[k]);
		Permute4(s, index + 1);

		swap(s[index], s[k]);//Backtracking
	}
}

int main() {
	string str;
	cin >> str;

	//Starting  Point (Pass By Value)
	Permute(str, 0);

	s = str;

	cout << "------------------------" << endl;

	//Starting Point
	Permute2(0);


	string s1 = str;

	cout << "------------------------" << endl;

	//Starting Point
	Permute3(s1, 0);


	char input[1000];
	cin >> input;

	cout << "------------------------" << endl;
	Permute4(input, 0);
}