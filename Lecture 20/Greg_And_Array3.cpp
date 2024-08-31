#include<iostream>
using  namespace std;
const int N = 1e5 + 3;
int n, m, k;
int a[100001] {0};
int l[100001] {0};
int r[100001] {0};
int d[100001] {0};
int OpCount[100001] {0};
int diff[100001] {0};

int main() {
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i = i + 1) {
		cin >> l[i] >> r[i] >> d[i];
	}

	for (int q = 1; q <= k; q = q + 1) {

		int x, y;
		cin >> x >> y;

		//I want to perfrom Operation number x,
		//ON x+1,ON x+2,.......ON y.

		OpCount[x] = OpCount[x] + 1;
		OpCount[y + 1] = OpCount[y + 1] - 1;
	}

	//Prefix of OpCount
	for (int i = 1; i <= m + 1; i = i + 1) {
		OpCount[i] = OpCount[i - 1] + OpCount[i];
	}


	// for (int i = 1; i <= m; i = i + 1) {
	// 	cout << OpCount[i] << " ";
	// }


	for (int i = 1; i <= N; i = i + 1) {
		//Currently We are at the operation i.
		int start = l[i];
		int end = r[i];

		diff[start] = diff[start] + (OpCount[i] * d[i]);
		diff[end + 1] = diff[end + 1] - (OpCount[i] * d[i]);
	}

	for (int i = 1; i <= N; i = i + 1) {
		diff[i] = diff[i - 1] + diff[i];
	}

	// cout << endl;
	for (int i = 1; i <= N; i = i + 1) {
		a[i] = a[i] + diff[i];
	}

	// cout << endl;
	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}

}




















