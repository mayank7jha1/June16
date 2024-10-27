#include<iostream>
using  namespace std;

//Function Prototype
void Merge(int*, int, int);

//Diving the range by mid Point.
void MergeSort(int *a, int s, int e) {

	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2;
	MergeSort(a, s, mid);
	MergeSort(a, mid + 1, e);

	//Conquer: Merge the above mentioned
	//range.
	Merge(a, s, e);
	return;
}

void Merge(int *a, int s, int e) {

	int mid = (s + e) / 2;

	int i = s;
	int j = mid + 1;

	//We want to merge the two range
	//[s,mid] and [mid+1,e].

	int c[10000] {0};
	int k = s;


	while (i <= mid and j <= e) {
		if (a[i] <= a[j]) {
			c[k] = a[i];
			i = i + 1;
			k = k + 1;
		} else {
			c[k] = a[j];
			k = k + 1;
			j = j + 1;
		}
	}

	while (i <= mid) {
		c[k] = a[i];
		i = i + 1;
		k = k + 1;
	}

	while (j <= e) {
		c[k] = a[j];
		k = k + 1;
		j = j + 1;
	}

	//Copy the c Array to  a array.
	for (int i = s; i <= e; i = i + 1) {
		a[i] = c[i];
	}
	return;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	MergeSort(a, 0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}






