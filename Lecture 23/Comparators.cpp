#include<iostream>
#include<algorithm>
using  namespace std;

bool Compare(int x, int y) {

	// if (x > y) {
	// 	return true;
	// } else {
	// 	return false;
	// }

	return (x < y);

}

int main() {

	int n = 8;
	int a[] {5, 1, 3, 5, 6, 7, 8, 9};

	/*
		less<int>()
		greater<int>()
		less_equal<int>()
		greater_equal<int>()
	*/

	//sort(a, a + n, greater<int>());
	//reverse(a, a + n);

	sort(a, a + n, Compare);


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}





}










