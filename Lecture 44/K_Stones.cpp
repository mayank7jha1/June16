#include<iostream>
#include<vector>
using  namespace std;
const int N = 1e5 + 5;
int n, k;
vector<int>a;
int dp[N] {0};//Initially Every Box is a Losing Position.

//For every element of this container a that is going to be
//represented as this iterator move do this task.

void F() {

	for (int pos = 1; pos <= k; pos++) {

		for (int move : a) {

			if (move > pos) {
				//This pos is a losing state move on.
				continue;
			}

			if (dp[pos - move] == 0) {
				dp[pos] = 1;
			}
		}
	}

	if (dp[k] == 1) {
		cout << "First" << endl;
	} else {
		cout << "Second" << endl;
	}

}



int main() {
	cin >> n >> k;
	a.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	F();
}