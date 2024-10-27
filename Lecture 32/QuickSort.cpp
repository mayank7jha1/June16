#include<iostream>
using  namespace std;

int Partion(int *a, int s, int e) {

	int i = s - 1;
	int j = s;
	int Pivot = a[e];

	for (; j < e; j = j + 1) {
		if (a[j] <= Pivot) {
			i = i + 1;
			swap(a[j], a[i]);
		}
	}

	//Now you know pivot element ka correct index.
	//i+1;
	swap(a[i + 1], a[e]);
	return i + 1;
}

//Diving the range by mid Point.
void QuickSort(int *a, int s, int e) {

	if (s >= e) {
		return;
	}

	//My Pivot will always be a[e].
	//Correct Position of this pivot will be
	//given to me by god.

	int Correct_Pivot_Index = Partion(a, s, e);

	QuickSort(a, s, Correct_Pivot_Index - 1);
	QuickSort(a, Correct_Pivot_Index + 1, e);

	return;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	QuickSort(a, 0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}






