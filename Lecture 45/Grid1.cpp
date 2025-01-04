#include<iostream>
#define int long long
#define mod 1000000007
using  namespace std;
char grid[1001][1001];
int h, w;

int Total_Ways(int h, int w) {

	int dp[1001][1001] {0};

	if (grid[1][1] == '#' or grid[h][w] == '#') {
		return 0;
	}

	for (int i = h; i >= 1; i--) {
		for (int j = w; j >= 1; j--) {
			if (i == h and j == w) {
				dp[i][j] = 1;
				continue;
			}

			if (grid[i][j] == '#') {
				dp[i][j] = 0;
			} else {

				if (i == h) {
					dp[i][j] = dp[i][j + 1] % mod;
				} else if (j == w) {
					dp[i][j] = dp[i + 1][j] % mod;
				} else {

					dp[i][j] = (dp[i + 1][j] % mod + dp[i][j + 1] % mod) % mod;
					// (a + b) % mod = (a % mod + b % mod) % mod;
				}
			}
		}
	}
	return dp[1][1];
}


int Total_Ways2(int x, int y) {

	int dp[1001][1001] {0};

	if (grid[1][1] == '#' or grid[h][w] == '#') {
		return 0;
	}


	for (int i = x; i <= h ; i++) {
		for (int j = y; j <= w; j++) {
			if (i == x and j == y) {
				dp[i][j] = 1;
				continue;
			}

			if (grid[i][j] == '#') {
				dp[i][j] = 0;
			} else {

				if (i == x) {
					dp[i][j] = dp[i][j - 1] % mod;
				} else if (j == y) {
					dp[i][j] = dp[i - 1][j] % mod;
				} else {

					dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
					// (a + b) % mod = (a % mod + b % mod) % mod;
				}
			}
		}
	}
	return dp[h][w];
}

int32_t main() {

	cin >> h >> w;

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> grid[i][j];
		}
	}

	cout << Total_Ways(h, w) << endl;
	cout << Total_Ways2(1, 1) << endl;
}