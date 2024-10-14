#include<iostream>
using  namespace std;
int n, m;
char maze[1001][1001];
bool visited[1001][1001], solution[1001][1001];


bool F(int x, int y) {

	if (x == n - 1 and y == m - 1) {
		solution[x][y] = 1;

		for (int i = 0; i < n; i = i + 1) {
			for (int j = 0; j < m; j = j + 1) {
				cout << solution[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}


	if (visited[x][y] == 1) {
		return false;
	}

	visited[x][y] = 1;
	solution[x][y] = 1;


	if (y + 1 <= m - 1 and visited[x][y + 1] == 0) {
		bool rightans = F(x, y + 1);
		if (rightans == 1) {
			return true;
		}
	}


	if (x + 1 <= n - 1 and visited[x + 1][y] == 0) {
		bool downans = F(x + 1, y);
		if (downans == 1) {
			return true;
		}
	}

	solution[x][y] = 0;
	return false;
}


int main() {

	cin >> n >> m;
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < m; j = j + 1) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}

	bool ans = F(0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}

}