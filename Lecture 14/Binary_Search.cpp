#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int  i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	//Define the Search Space.
	int s = 0, e = n - 1;


	//While My SS exists.
	int ans = n;

	while (s <= e) {

		//Find  the middle point of the SS.

		// int mid=s+(e-s)/2;

		int mid = (s + e) / 2;

		if (a[mid] == target) {
			ans = mid;
			break;
		} else if (a[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	cout << ans << endl;



}









