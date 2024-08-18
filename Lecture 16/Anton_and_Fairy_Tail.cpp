#include<iostream>
using  namespace std;

int main() {

	long long n, m;
	cin >> n >> m;

	if (n <= m) {
		cout << n << endl;
		return 0;
	}

	//Define the Search Space
	long long s = 0;
	long long e = 1e10;//1* 10^10

	long long ans = -1;

	while (s <= e) {
		long long mid = (s + e) / 2;

		long long target = n - m;
		long long d = (mid * (mid + 1)) / 2;

		if (d >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}

	}

	cout << ans + m << endl;


}