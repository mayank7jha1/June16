#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Subarray Index Wise.

	//This outer loop is the starting point of
	//your subarray that you are going to
	//print currently.
	int count = 0;

	for (int i = 0; i < n; i = i + 1) {

		//Currently we are talking about
		//the subarray that starts from i
		//index.

		//This Loop Represents the end point
		//of my current subarray which is
		//from index to j index.
		for (int j = i; j < n; j = j + 1) {

			//We want to print the subarray
			//that starts from i index
			//and eends at j index.
			count = count + 1;
			//For Printing:
			for (int k = i; k <= j; k = k + 1) {
				cout << a[k] << " ";
			}
			cout << endl;
		}


		//I have printed out all the subarray that
		//start from index i.
		cout << endl;
	}

	//I have printed out/iterated over all the subarrays.
	cout << count << endl;
}

















