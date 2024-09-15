#include<iostream>
#include<algorithm>
using  namespace std;


bool compare(string x, string y) {

	string xy = x + y;
	string yx = y + x;

	if (xy > yx) {
		return  true;
	} else {
		return false;
	}
}

int main() {
	// int x;
	// string x;
	// cin >> x;

	// cout << x[0] << endl;
	// cout << x << endl;

	int t;
	cin >> t;


	while (t > 0) {

		int n;
		cin >> n;

		string s[n];

		for (int i = 0; i < n; i = i + 1) {
			cin >> s[i];
		}
		//cout << "Hello" << endl;

		sort(s, s + n, compare);

		for (int i = 0; i < n; i = i + 1) {
			cout << s[i];
		}

		cout << endl;

		t = t - 1;
	}

}