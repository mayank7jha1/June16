#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long
int n, p, k;
int cost[200001];

int F(int n) {

	if (n == 0) {
		return cost[n];
	}

	if (n < k - 1) {
		return cost[n] + F(n - 1);
	}

	if (n == k - 1) {
		return cost[n];
	}

	return F(n - k) + cost[n];
}

int Price() {

	int a[200001];
	for (int i = 0; i < n; i = i + 1) {
		a[i] = F(i);
	}

	int ans = 0;
	for (int i = 0; i < n; i = i + 1) {
		if (a[i] <= p) {
			ans = i + 1;
		}
	}

	return ans;
}


int32_t main() {
	int t;
	cin >> t;

	while (t > 0) {
		cin >> n >> p >> k;
		for (int i = 0; i < n; i = i + 1) {
			cin >> cost[i];
		}
		sort(cost, cost + n);
		cout << Price() << endl;
		t = t - 1;
	}
}