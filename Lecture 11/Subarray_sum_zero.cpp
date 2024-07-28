#include<iostream>
#include<climits>
using  namespace std;


/*
	We need to check if the given array contains
	a subarray whose sum is zero.

	Logic:
	1. Is there a element in prefix array whose frequencyy is more than
	   one.
	2. Is Frequency of zero more than zero in the prefix array.

	Properties of Prefix Sum Array: (Of Positive Numbers:)
	1. It will always be arranged in ascending order. (Sorted Data)
	(Binary Search + Prefix Sum is Very Important topic.)
*/



int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Create a Prefix Sum Array for this array.
	int pre[n] {0};
	pre[0] = a[0];

	int maxi = INT_MIN, mini = INT_MAX;

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];

		if (maxi < pre[i]) {
			maxi = pre[i];
		}
		if (mini > pre[i]) {
			mini = pre[i];
		}
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}

	cout << endl;

	//Build the frequency array for this prefix array
	int freq[maxi - mini + 1] {0};

	for (int i = 0; i < n; i = i + 1) {
		int element = pre[i];
		int shifted_element = element - mini;
		freq[shifted_element] = freq[shifted_element] + 1;
	}


	for (int i = 0; i < maxi - mini + 1; i = i + 1) {
		if (freq[i] > 0) {
			int element = i + mini;
			cout << element << " " << freq[i] << endl;
		}
	}

	//Check Logic:: Iterating over the freq array :

	for (int i = 0; i < maxi - mini + 1; i = i + 1) {

		//i---> Shifted element.
		//Agar mere element zero ki frequency is more than zero
		//then answer is yes.
		//element: i+mini

		//Agar mere kisi bhi element ki frequency is more than 1
		//then  also print YES.

		//This  is just a way of writing element because
		//element was negative and i cannot store negative
		//element inside array.
		int shifted_element = i;

		//This is the element that exits inside the prefix
		//array.
		int element = i + mini;

		if (i + mini == 0 and freq[i + mini] > 0) {
			cout << "YES" << endl;
			return 0;
		} else if (freq[i] > 1) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;




}