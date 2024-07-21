#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int k;
	cin >> k;

	//Build your Prefix Array.
	int pre[n + 1] {0};

	pre[0] = a[0];
	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];
	}


	int i = 1;
	while (i <= k) {

		int l, r;
		cin >> l >> r;

		//Calcalute sum[l,r]:

		/*

			sum[l,r]=pre[r]-pre[l-1]:
			l!=0

			l==0
			sum[l,r]=pre[r]:

		*/

		if (l == 0) {

			cout << pre[r] << endl;

		} else {

			cout << pre[r] - pre[l - 1] << endl;
		}

		i = i + 1;
	}


}