#include<iostream>
#include<climits>
using  namespace std;

/*
	Definition:
	F(i): Min Cost From ith Stone to nth Stone.

	Recursive Relation:
	F(i) = min(abs(cost[i] - cost[i+1]) + F(i + 1),

	           abs(cost[i] - cost[i+2]) + F(i + 2));

	Where i  Goes From 1th stone to nth Stone.

	F(n) = 0; i.e. Min Cost from nth Stone to nth Stone is zero.
*/
int cost[100005] {0};
int n;

int F(int i) {

	if (i == n) {
		return 0;
	}

	/*
		Currently I am standing at the ith stone where i initially
		is 1.
	*/

	int Op2 = INT_MAX;

	//Where You are taking a Single Step Jump From the current Stone.
	int Op1 = abs(cost[i] - cost[i + 1]) + F(i + 1);

	//Where You are taking a 2 Step Jump From the current Stone.
	if (i + 2 <= n) {
		Op2 = abs(cost[i] - cost[i + 2]) + F(i + 2);
	}

	//You are returning the answer of F(i).
	int ans = min(Op1, Op2);

	return ans;
}

int main() {

	cin >> n;

	//Indexing is 1 based for easy Implementation.
	for (int i = 1; i <= n; i = i + 1) {
		cin >> cost[i];
	}

	//Starting Point: (Big  Problem)
	cout << F(1) << endl;
}