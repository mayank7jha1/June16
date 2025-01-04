#include<iostream>
#include<algorithm>
using  namespace std;



/*

	dp1[x][y]: Maximum Calorie from 1,1 to x,y.
	dp2[x][y]: Maximum Calorie from n,1 to x,y.
	dp3[x][y]:Maximum Calorie from x,y to n,m.
	dp4[x][y]:Maximum Calorie from x,y to 1,m.

*/
int dp1[1001][1001] {0};
int dp2[1001][1001] {0};
int dp4[1001][1001] {0};
int dp3[1001][1001] {0};
int n, m;
int cal[1001][1001] {0};


int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> cal[i][j];
		}
	}

	//Build dp1:
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 and j == 1) {
				dp1[i][j] = cal[i][j];
			} else if (i == 1) {
				dp1[i][j] = dp1[i][j - 1] + cal[i][j];
			} else if (j == 1) {
				dp1[i][j] = dp1[i - 1][j] + cal[i][j];
			} else {
				dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + cal[i][j];
			}
		}
	}

	//Build dp2:
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= m; j++) {
			if (i == n and j == 1) {
				dp2[i][j] = cal[i][j];
			} else if (i == n) {
				dp2[i][j] = dp2[i][j - 1] + cal[i][j];
			} else if (j == 1) {
				dp2[i][j] = dp2[i + 1][j] + cal[i][j];
			} else {
				dp2[i][j] = max(dp2[i + 1][j], dp2[i][j - 1]) + cal[i][j];
			}
		}
	}



	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << dp1[i][j] << " ";
		}
		cout << endl;
	}


	cout << endl << endl;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << dp2[i][j] << " ";
		}
		cout << endl;
	}


	cout << endl << endl;


	//Build dp3:
	for (int i = n; i >= 1; i--) {
		for (int j = m; j >= 1; j--) {
			if (i == n and j == m) {
				dp3[i][j] = cal[i][j];
			} else if (i == n) {
				dp3[i][j] = dp3[i][j + 1] + cal[i][j];
			} else if (j == m) {
				dp3[i][j] = dp3[i + 1][j] + cal[i][j];
			} else {
				dp3[i][j] = max(dp3[i + 1][j], dp3[i][j + 1]) + cal[i][j];
			}
		}
	}


	//Build dp4:
	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= 1; j--) {
			if (i == 1 and j == m) {
				dp4[i][j] = cal[i][j];
			} else if (i == 1) {
				dp4[i][j] = dp4[i][j + 1] + cal[i][j];
			} else if (j == m) {
				dp4[i][j] = dp4[i - 1][j] + cal[i][j];
			} else {
				dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + cal[i][j];
			}
		}
	}



	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << dp3[i][j] << " ";
		}
		cout << endl;
	}


	cout << endl << endl;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << dp4[i][j] << " ";
		}
		cout << endl;
	}


	cout << endl << endl;

	int final = 0;

	for (int i = 2; i < n; i++) {
		for (int j = 2; j < m; j++) {
			// Meeting Point=i,j
			int op1 = dp1[i - 1][j] + dp3[i + 1][j] +
			          dp2[i][j - 1] + dp4[i][j + 1];

			int op2 = dp1[i][j - 1] + dp3[i][j + 1] +
			          dp2[i + 1][j] + dp4[i - 1][j];

			int ans = max(op1, op2);

			final = max(final, ans);
		}
	}

	cout << final << endl;


}