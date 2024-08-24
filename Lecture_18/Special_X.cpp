#include<iostream>
using  namespace std;

int n;
int a[100005];

int lower_bound(int s, int e, int target) {

	int ans = n;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}


void bubble_sort() {
	for (int i = 0; i < n - 1; i = i + 1) {
		int flag = 0;
		for (int j = 0; j < n - i - 1; j = j + 1) {
			if (a[j] > a[j + 1]) {
				flag = 1;
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}

		}

		if (flag == 0) {
			break;
		}
	}
}


int specialArray() {

	bubble_sort();

	for (int x = 1; x <= n; x = x + 1) {

		int index = lower_bound(0, n - 1, x);

		if (n - index == x) {
			return x;
		}
	}
	return -1;
}



int main() {

	cin >> n;


	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	cout << specialArray() << endl;
}






