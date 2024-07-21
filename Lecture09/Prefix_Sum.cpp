#include<iostream>
using  namespace std;

int main() {

	int a[] {5, 1, 7, 2, 12};

	int pre[6] {0};

	pre[0] = a[0];

	for (int i = 1; i < 5; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < 5; i = i + 1) {
		cout << pre[i] << " ";
	}

}