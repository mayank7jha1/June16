#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long

int Noise(string &s) {

	int countS = 0;//Total S in string till now.
	int ans = 0;//Total Noise uptill now in string.

	for (int i = 0; i < s.length(); i = i + 1) {

		if (s[i] == 's') {
			countS = countS + 1;
		} else {
			ans = ans + countS;
		}
	}

	return ans;
}


bool Compare(string &x, string &y) {

	string xy = x + y;
	string yx = y + x;

	if (Noise(xy) > Noise(yx)) {
		return true;
	} else {
		return false;
	}
}


int32_t main() {
	int n;
	cin >> n;

	string a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	sort(a, a + n, Compare);

	string final = "";

	for (int i = 0; i < n; i = i + 1) {
		final = final + a[i];
	}

	cout << Noise(final) << endl;

	// string s = "ssshsh";
	// cout << Noise(s) << endl;
	// s=y;
}