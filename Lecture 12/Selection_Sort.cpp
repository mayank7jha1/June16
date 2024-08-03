#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Go to 0 to 4/n-1 index in order for finding the
	//corresponding smallest element.

	for (int i = 0; i < n - 1; i = i + 1) {

		//Abhi mujhe ith smallest element find karna hain.
		int Smallest_Element_Index = i;

		for (int j = i + 1; j < n; j = j + 1) {
			if (a[j] < a[Smallest_Element_Index]) {
				Smallest_Element_Index = j;
			}
		}

		//ith  smallest element mil chuka hain uska
		//current index is Smallest_Element_Index.
		// a[i],a[Smallest_Element_Index]

		int temp = a[Smallest_Element_Index];
		a[Smallest_Element_Index] = a[i];
		a[i] = temp;

	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}





















