#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	int a[10001];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	int ans = INT_MIN;


	for (int i = 0; i < n; i = i + 1) {
		int cost = 0;
		int count = 0;

		for (int j = i; j < n; j = j + 1) {
			cost = cost + a[i];

			if (cost > t) {
				break;
			}

			count = count + 1;
		}

		if (ans < count) {
			ans = count;
		}
	}

	cout << ans << endl;
}







