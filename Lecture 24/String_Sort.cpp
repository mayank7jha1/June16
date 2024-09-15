#include<iostream>
#include<algorithm>
using  namespace std;

bool compare(string &x, string &y) {

	if (x.find(y) == 0 or y.find(x) == 0) {

		//Either x or y is a prefix of another string.
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	} else {
		return x < y;
	}
}

int main() {

	int n;
	cin >> n;

	string s[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> s[i];
	}
	//cout << "Hello" << endl;

	sort(s, s + n, compare);

	for (int i = 0; i < n; i = i + 1) {
		cout << s[i] << endl;
	}

}