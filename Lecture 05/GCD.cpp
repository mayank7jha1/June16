#include<iostream>
using  namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int m = 0;

	if (a < b) {
		m = a;
	} else {
		m = b;
	}

	int i = 1, ans = 0;

	while (i <= m) {

		if ((a % i == 0) and (b % i == 0)) {
			ans = i;
		}

		i = i + 1;
	}

	cout << ans << endl;

}












