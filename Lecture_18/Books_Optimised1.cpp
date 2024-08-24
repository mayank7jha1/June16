#include<iostream>
#include<climits>
using  namespace std;
int n;
int a[10001];
int pre[10001];

int upper_bound(int s, int e, int target) {

	int ans = n;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (pre[mid] > target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}

int main() {
	int t;
	cin >> n >> t;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];

		if (i == 0) {
			pre[i] = a[i];
		} else {
			pre[i] = pre[i - 1] + a[i];
		}
	}

	//cout << upper_bound(0, n - 1, 5) << endl;


	int ans = INT_MIN;
	int UTT = t;


	for (int i = 0; i < n; i = i + 1) {
		//I want to calculate ith index se kitne index tax kitab padh sakta hu.
		if (i > 0) {
			UTT = UTT + pre[i - 1];
		}

		int index = upper_bound(0, n - 1, UTT);
		int No_of_Books_from_ith_Index = index - i;
		//cout << No_of_Books_from_ith_Index << endl;

		if (ans < (No_of_Books_from_ith_Index)) {
			ans = No_of_Books_from_ith_Index;
		}
	}

	cout << ans << endl;
}







