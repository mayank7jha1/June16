#include<iostream>
using  namespace std;
int n, h, l, r;
int a[2001];

int F(int index, int Waking_Time) {

	if (index == n) {
		return 0;
	}

	int x = (a[index] + Waking_Time) % h;
	int y = (a[index] - 1 + Waking_Time) % h;

	int ans1 = 0;
	int ans2 = 0;

	if (x >= l and x <= r) {
		ans1 = 1;
	}

	if (y >= l and y <= r) {
		ans2 = 1;
	}

	int Op1 = ans1 + F(index + 1, x);
	int Op2 = ans2 + F(index + 1, y);

	return max(Op1, Op2);
}


int main() {
	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Starting Point.
	cout << F(0, 0) << endl;
}