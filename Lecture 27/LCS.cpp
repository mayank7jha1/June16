#include<iostream>
#include<string>
using  namespace std;
string s, t;

/*
	F(i,j): Length of LCS in string s from
			index i to n-1 and string t from
			index j to m-1.

*/

int F(string &s, string &t, int i, int j) {

	if (i == s.length() or j == t.length()) {
		return  0;
	}

	if (s[i] == t[j]) {
		int Op1 = 1 + F(s, t, i + 1, j + 1);
		return Op1;

	} else {

		int Op2 = F(s, t, i + 1, j);
		int Op3 = F(s, t, i, j + 1);
		return max(Op2, Op3);
	}
}


int main() {
	cin >> s >> t;
	cout << F(0, 0) << endl;
}