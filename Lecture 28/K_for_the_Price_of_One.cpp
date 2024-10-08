#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long
int n, p, k;
int cost[200001];

int F(int x) {

	if (x == 0) {
		return cost[x];
	}

	if (x < k - 1) {
		return cost[x] + F(x - 1);
	}

	if (x == k - 1) {
		return cost[x];
	}

	return F(x - k) + cost[x];
}

int Price() {

	int a[200001];
	for (int i = 0; i < n; i = i + 1) {
		a[i] = F(i);//Minimum Amount of Moneey required to buy items from 0 to ith index.
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







