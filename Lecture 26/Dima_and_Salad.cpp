#include<iostream>
using  namespace std;
#define int long long
int n, k;
int *taste, *calorie;

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

	//Option 1: Choose the Current Fruit.
	int Op1 = taste[index] +
	          Solve(index + 1, sum + (taste[index] - k * calorie[index]));

	//Option 2: Not Choosing the Current Fruit.
	int Op2 = 0 + Solve(index + 1, sum + 0);

	return max(Op1, Op2);
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
	int ans = Solve(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}