#include<iostream>
using  namespace std;
int n, m, k;
int a[1001] {0};
int l[1001] {0};
int r[1001] {0};
int d[1001] {0};


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

		for (int i = x; i <= y; i = i + 1) {
			//Currently We are Performing
			//Operation Number i.

			for (int j = l[i]; j <= r[i]; j = j + 1) {
				a[j] = a[j] + d[i];
			}


		}
	}


	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}

}




















