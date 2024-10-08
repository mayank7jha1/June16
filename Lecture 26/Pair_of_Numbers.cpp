#include<iostream>
#include<climits>
using  namespace std;
int target;

/*
	F(5,3): Min  Steps to reach 5 from 5,3 is zero.

	F(7,3): Min Steps to reach 5 from 7,3 which is Impossible.

*/

int F(int x, int y) {

	if (x > target or y > target) {
		return 1e8;
	}

	if (x == target or y == target) {
		return 0;
	}

	//Task and Next State:
	int Op1 = F(x + y, y);
	int Op2 = F(x, y + x);

	return 1 + min(Op1, Op2);
}

int main() {
	cin >> target;

	//Starting Point.
	int MinStep = F(1, 1);

	cout << MinStep << endl;
}







