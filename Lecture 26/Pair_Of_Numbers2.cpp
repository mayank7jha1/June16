#include<iostream>
#include<climits>
using  namespace std;
int target;


/*
	F(x,y): Min  Steps to reach (1,1) from (x,y).

	int count: Current Path me abtak kitne steps
	aachhuke hain.

	int ans=Out of all the paths min path vaale
	raste me kitne steps the.

	F(1,1): Calculate the min from the current path
	and all of the paths.
*/

int F2(int x, int y) {
	if (x == 1 and y == 1) {
		return 0;
	}

	int Op1 = INT_MAX, Op2 = INT_MAX;

	if (x - y > 0) {
		Op1 = 1 + F2(x - y, y);
	}

	if (y - x > 0) {
		Op2 = 1 + F2(x, y - x);
	}

	return min(Op1, Op2);
}

int Solve2() {

	if (target == 1) {
		return 0;
	}
	int smallest = INT_MAX;

	for (int i = 1; i <= target - 1; i = i + 1) {
		int value = 1 + F2(i, target - i);
		smallest = min(smallest, value);
	}
	return smallest;
}

//This will Contain My Minimum steps across all the paths.
int ans = INT_MAX;
void F(int x, int y, int count) {

	if (x == 1 and y == 1) {
		ans = min(ans, count);
		return;
	}

	if (x - y > 0) {
		F(x - y, y, count + 1);
	}

	if (y - x > 0) {
		F(x, y - x, count + 1);
	}
}

void Solve() {

	if (target == 1) {
		ans = 0;
		return;
	}

	for (int i = 1; i <= target - 1; i = i + 1) {
		F(i, target - i, 1);
	}

	return;
}

int main() {
	cin >> target;

	//Starting Point.
	Solve();
	cout << Solve2() << endl;

	cout << ans << endl;
}







