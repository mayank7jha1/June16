#include<iostream>
using  namespace std;

bool CanPlace(char board[][9], int row, int col, char ch) {

	//1. Check in current row.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[row][i] == ch) {
			return false;
		}
	}


	//2. Check in current column.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[i][col] == ch) {
			return false;
		}
	}

	//3. Check in Current Submatrix
	int sx = (row / 3) * 3;
	int sy = (col / 3) * 3;


	for (int i = sx; i < sx + 3; i = i + 1) {
		for (int j = sy; j < sy + 3; j = j + 1) {
			if (board[i][j] == ch) {
				return false;
			}
		}
	}

	return true;
}


bool F(char board[][9], int row, int col) {


	if (row == 9) {
		return true;
	}

	if (col == 9) {
		return F(board, row + 1, 0);
	}

	if (board[row][col] != '.') {
		return F(board, row, col + 1);
	} else {
		for (char ch = '1'; ch <= '9'; ch = ch + 1) {
			if (CanPlace(board, row, col, ch) == 1) {
				board[row][col] = ch;
				int small_ans = F(board, row, col + 1);
				if (small_ans == 1) {
					return true;
				}
			}
		}
	}

	//If I am Standing here.
	board[row][col] = '.';
	return false;
}

int main() {
	char board[9][9];

	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cin >> board[i][j];
		}
	}


	bool ans = F(board, 0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}

	//Printing the Board:
	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}


/*

	Input:

	5 3 . . 7 . . . .
	6 . . 1 9 5 . . .
	. 9 8 . . . . 6 .
	8 . . . 6 . . . 3
	4 . . 8 . 3 . . 1
	7 . . . 2 . . . 6
	. 6 . . . . 2 8 .
	. . . 4 1 9 . . 5
	. . . . 8 . . 7 9

*/

/*
	Output:

	5 3 4 6 7 8 9 1 2
	6 7 2 1 9 5 3 4 8
	1 9 8 3 4 2 5 6 7
	8 5 9 7 6 1 4 2 3
	4 2 6 8 5 3 7 9 1
	7 1 3 9 2 4 8 5 6
	9 6 1 5 3 7 2 8 4
	2 8 7 4 1 9 6 3 5
	3 4 5 2 8 6 1 7 9

*/