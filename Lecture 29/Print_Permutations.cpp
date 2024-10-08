#include<iostream>
using  namespace std;

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



int main() {

	string str;
	cin >> str;
	Permute(str, 0);
}