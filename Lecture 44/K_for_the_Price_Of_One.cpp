#include<iostream>
#include<vector>
using  namespace std;
const int N = 2e5 + 9;
#define int long long
int t;
int p, n, k;
int dp[N] {0};
int cost[N];

int Solve() {

	for (int i = 1; i <= n; i++) {
		if (i < k) {
			dp[i] = dp[i - 1] + cost[i];
		} else if (i == k) {
			dp[i] = cost[i];
		} else {
			dp[i] = dp[i - k] + cost[i];
		}
	}

	int items = 0;

	for (int i = 1; i <= n; i++) {
		if (dp[i] <= p) {
			items = i;
		}
	}

	return items;
}



int32_t main() {
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;
		for (int i = 1; i <= n; i++) {
			cin >> cost[i];
		}
		sort(cost, cost + n);

		cout << Solve() << endl;
	}

}