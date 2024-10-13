#include<iostream>
using  namespace std;
int count1 = 0;

/*

	F(0,n,board): I want to put n queen from [0,3]
	indexed row and I am currently at row 0 where
	every row will only have one queen.

*/

bool CanPlace(char board[][100], int row, int col, int n) {

	//Check the current row:
	for (int i = 0; i < col; i = i + 1) {
		if (board[row][i] == 'Q') {
			return false;
		}
	}

	//Check the current column:
	for (int i = 0; i < row; i = i + 1) {
		if (board[i][col] == 'Q') {
			return false;
		}
	}

	//Left Diagonal:
	int i = row, j = col;

	while (i >= 0 and j >= 0) {
		if (board[i][j] == 'Q') {
			return false;
		}
		i = i - 1;
		j = j - 1;
	}


	//Right Diagonal
	i = row, j = col;

	while (i >= 0 and j < n) {
		if (board[i][j] == 'Q') {
			return false;
		}
		i = i - 1;
		j = j + 1;
	}

	return true;
}



bool F(int r, int n, char board[][100]) {

	if (r == n) {

		//You have one solution:

		for (int x = 0; x < n; x = x + 1) {
			for (int y = 0; y < n; y = y + 1) {

				cout << board[x][y] << " ";
			}
			cout << endl;
		}
		count1++;
		//cout << endl;
		return false;
	}



	//You are currently standing at row r.
	for (int col = 0; col < n; col = col + 1) {

		if (CanPlace(board, r, col, n) == 1) {

			board[r][col] = 'Q';

			int small_ans = F(r + 1, n, board);
			if (small_ans == 1) {
				return true;
			}

			//If you are standing here:
			board[r][col] = '.';//Backtracking
		}
	}

	return false;
}


int main() {
	int n;
	cin >> n;

	char board[100][100];
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			board[i][j] = '.';
		}
	}



	if (n <= 3) {
		cout << -1 << endl;
	}
	int ans = F(0, n, board);

	// if (ans == 0) {
	// 	cout << "No such combination exists." << endl;
	// }

	//cout << count1 << endl;
}