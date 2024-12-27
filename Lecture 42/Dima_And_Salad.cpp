#include<iostream>
#include<cstring>
using  namespace std;
// #define int long long
int n, k;
int *taste, *calorie;
const int N = 1e5;

int dp[101][200001] {0};

//Computation: (101*200001)*1 = (2*10^7)
//Space: 101*200001

int Solve(int index, int sum) {

	if (index == n) {
		//You have completed a Path.
		if (sum == 0) {
			return 0;
		} else {
			//This is not a valid path hence I want to reduce the
			//sum to as small as possible so in order to never make
			//this path as a optimal path.
			return -1e9;
		}
	}

	if (dp[index][sum + N] != -1) {
		return dp[index][sum + N];
	}

	//Option 1: Choose the Current Fruit.
	int Op1 = taste[index] +
	          Solve(index + 1, sum + (taste[index] - k * calorie[index]));

	//Option 2: Not Choosing the Current Fruit.
	int Op2 = 0 + Solve(index + 1, sum + 0);

	return dp[index][sum + N] = max(Op1, Op2);
}

int32_t main() {

	cin >> n >> k;
	taste = new int[n + 1];
	calorie = new int[n + 1];

	for (int i = 0; i < n; i = i + 1) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> calorie[i];
	}

	memset(dp, -1, sizeof(dp));

	int ans = Solve(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}














