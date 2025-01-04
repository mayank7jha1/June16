#include<iostream>
#include<limits>
#include<algorithm>
using  namespace std;
int pre[1001][1001] {0};

int main() {
	int n, m;
	cin >> n >> m;


	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		pre[x][y] = 1;
	}

	//Build the 2-D Prefix Table:
	//1. Rowwise:

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			pre[i][j] = pre[i][j - 1] + pre[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			//Column Wise
			pre[i][j] = pre[i - 1][j] + pre[i][j];
		}
	}

	//Computation: n^2+n^2+n^2*4 ~~ n^2==6*(1001*1001)
	//1001*1001

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			int Op1 = pre[i][j];
			int Op2 = pre[i][n] - Op1;
			int Op3 = pre[n][j] - Op1;
			int Op4 = pre[n][n] - Op1 - Op2 - Op3;

			int value = min({Op1, Op2, Op3, Op4});

			ans = max(ans, value);

		}
	}

	cout << ans << endl;
}