#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int  i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	int s = 0, e = n - 1;
	int ans = n;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] > target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	cout << ans << endl;
}









