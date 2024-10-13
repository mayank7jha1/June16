#include<iostream>
#include<climits>
using  namespace std;

int n;
int *value, *visited;
int ans = INT_MAX;//Out of all the paths the minimum number of steps to reach the top;

void F(int i, int count) {

	if (i == n) {
		ans = min(ans, count);
		return;
	}

	visited[i] = 1;

	//Option 1: When  you take a 1 step Jump.
	if (i + 1 <= n and visited[i + 1] == 0) {
		F(i + 1, count + 1);
	}

	//Option 2: When  you take value of stair step Jump.
	if (i + value[i] <= n and i + value[i] >= 0
	        and visited[i + value[i]] == 0) {

		F(i + value[i], count + 1);
	}

	//It is possible that i reach this ith stair from
	//a different path and hence i want to reinstate its
	//original state.

	visited[i] = 0;//Backtracking
}


int main() {


	int t;
	cin >> t;

	while (t > 0) {

		cin >> n;

		value = new int[n] {0};
		visited = new int[n] {0};

		for (int i = 0; i < n; i = i + 1) {
			cin >> value[i];
		}

		F(0, 0);

		if (ans == INT_MAX) {
			cout << -1 << endl;
		} else {
			cout << ans << endl;
		}

		ans = INT_MAX;//For every test case answer needs to
		//be INT_MAX.

		t = t - 1;
	}
}