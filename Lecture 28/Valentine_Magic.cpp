#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;
int n, m;
int chocolates[1000003] {0};
int candies[1000003] {0};


/*
	F(i,j): Minimum absolute difference beetween
	some boys chocolates and girls candies when
	chosen from for boys [i,n-1] and for girs
	[j,m-1].
*/

int F(int i, int j) {

	if (i == n) {
		//Boys are done making pairs.
		return 0;
	}

	if (j == m) {
		//This means girls are finished before boys
		//some boys will be left.
		//this path can never become your answer
		return 1e8;
	}


	//You are choosing the current boy girl pair.
	int Op1 = abs(chocolates[i] - candies[j]) + F(i + 1, j + 1);

	//You are skipping the current girl.
	int Op2 = 0 + F(i, j + 1);

	return min(Op1, Op2);
}


int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i = i + 1) {
		cin >> chocolates[i];
	}

	for (int i = 0; i < m; i = i + 1) {
		cin >> candies[i];
	}

	sort(chocolates, chocolates + n);
	sort(candies, candies + m);

	//Starting Point
	cout << F(0, 0) << endl;
}









