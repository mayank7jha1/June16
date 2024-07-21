#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int count = 0;//Total number of subarrays.
	int sum = 0;//Mere current subarray ka sum.
	int maxi = INT_MIN;//This stores the maximum
	//sum subarray across all the subarray sum.

	for (int i = 0; i < n; i = i + 1) {

		//sum = 0;//For every subarray that start from
		//i you have made sum 0.
		//I se start hone vale kaafi saare subarray
		//honge and hence i  want sum to be zero
		//each and every subarray that start from i.
		//isliye j ke ander sum=0 karna jarurri hain.

		for (int j = i; j < n; j = j + 1) {

			//Make this sum as zero because for
			//subarray that starts from i index
			//and end at j index the current subarray
			//sum which stored in variable sum should
			//start from 0.

			sum = 0;

			count = count + 1;
			//Currently We have found a subarray
			//that starts from i and ends at j index.

			for (int k = i; k <= j; k = k + 1) {
				sum = sum + a[k];
			}


			if (maxi < sum) {
				maxi = sum;
			}
			cout << sum << endl;
		}
		cout << endl;
	}


	//I am done with my task over every subarray.
	cout << maxi << endl;
	cout << count << endl;
}

















