#include<iostream>
using  namespace std;

/*
	Given an array of size n:

	Print  the range/subarray sum
	of these  queries/questions
	(that range between [x,y]).

         0 1 2 3 4
	E.g: 5 1 7 2 12

	Calculate :

	Query 1: Sum(1,4): a[1]+a[2]+a[3]+a[4]
	Query 2: Sum(2,4): a[2]+a[3]+a[4]

	and so on!.

	n can  range between : [1,10^5]
	k can range between  : [1,10^5]


	Q: 	User will give you :
		Size of array:
		Array elements:
		value of k(No of Questions/queries)
		For every query user will give you
		two numbers a,b and you  have to calculate
		sum from a to b inside the array.
*/


int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int i = 1;
	// for (int i = 1; i <= k; i = i + 1) {

	// 	int a, b;
	// 	cin >> a >> b;

	// 	int sum = 0;

	// 	for (int j = a; j <= b; j = j + 1) {
	// 		sum = sum + arr[j];
	// 	}

	// 	cout << sum << endl;
	// }

	while (i <= k) {

		int a, b;
		cin >> a >> b;

		int sum = 0;

		for (int j = a; j <= b; j = j + 1) {
			sum = sum + arr[j];
		}

		cout << sum << endl;

		i = i + 1;
	}

}









