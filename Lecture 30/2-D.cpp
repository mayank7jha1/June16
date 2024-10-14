#include<iostream>
using  namespace std;

// int F(int (*a)[3]) {

// }

// int F(int a[1000][1000], int m, int n) {

// }

// int m, n;

// const int m = 10099;
// const int n = 11111;

// int F(int m, int n, int a[m][n]) {

// }


// const int m = 1000;
// const int n = 10000;

// int F(int a[m][n]) {

// }


int main() {


	// //Variables
	// int x = 10;
	// int y = 30;

	// //One - Dimentional Array (Integer Array)
	// int b[4];
	// int b1[] {1, 2, 3, 4, 5};
	// int b2[] = {2, 3, 4, 5, 6, 4};

	// //Input:
	// int n;
	// cin >> n;

	// int b3[n];

	// for (int i = 0; i < n; i = i + 1) {
	// 	cin >> b3[i];
	// }

	// //Output
	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << b3[i] << " ";
	// }

	// cout << endl;


	// //One Dimensional Character Array
	// char c[4];
	// char c1[] {'M', 'A', 'Y', '\0'};
	// char c2[] = {'M', 'A', 'Y', '\0'};

	// char c3[] {"MAY"};

	// //Input:
	// int n1;
	// cin >> n1;

	// char c4[n];

	// for (int i = 0; i < n1; i = i + 1) {
	// 	cin >> c4[i];
	// }

	// //Output
	// for (int i = 0; i < n1; i = i + 1) {
	// 	cout << c4[i] << " ";
	// }

	// cin >> c4;
	// cout << c4;



	// //2-Dimentional Array;

	// int d[3][5];
	// int d1[][4] = {{1, 2, 3, 5}, {3, 2, 1}, {0, 2}};
	// int d2[][4] {{1, 2, 3, 5}, {3, 2, 1}, {0, 2}};

	// char e[3][4];
	// char e1[][5] = {{"Maya"}, {'S', 'A', 'Y', '\0'}};


	// d2[2]:This is an array

	// cout << d2 << endl;
	// cout << d2[2] << endl;
	// cout << d2[2][1] << endl;

	// cout << e1 << endl;
	// cout << e1[2] << endl;
	// cout << e1[2][2] << endl;

	int m, n;
	cin >> m >> n;
	int d2[m][n];


	for (int i = 0; i < m; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			cin >> d2[i][j];
		}
	}


	for (int i = 0; i < m; i = i + 1) {

		for (int j = 0; j < n; j = j + 1) {
			cout << d2[i][j] << " ";
		}

		cout << endl;
	}

	//int d2[1000][1000];

	// F(d2);

	//F(m, n, d2);

}
