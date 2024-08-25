#include<iostream>
using  namespace std;
int n, k;
char ch[1000001];

int Solve(char x) {

	/*
		We want to replace char that is not x.
	*/

	int start = 0;


	int count = 0;//Number of times you have changed not x charr
	//to x.

	int Maximum_Subtring = 0;

	//Expand till you have found  the undesired and then
	//again make the window desired.

	for (int end = 0; end < n; end = end + 1) {

		//Expansion
		if (ch[end] != x) {
			count = count + 1;
		}


		//Shrinking
		//If You have reached an undesired window shrink it.

		while (start <= end and count > k) {
			if (ch[start] != x) {
				count = count - 1;
			}
			start = start + 1;
		}

		//Updation.
		//Update the length.

		if (Maximum_Subtring < end - start + 1) {
			Maximum_Subtring = end - start + 1;
		}
	}

	return Maximum_Subtring;
}


int main() {
	cin >> n >> k;
	cin >> ch;
	int ans1 = Solve('b');
	int ans2 = Solve('a');

	int final_ans;

	if (ans1 > ans2) {
		final_ans = ans1;
	} else {
		final_ans = ans2;
	}

	cout << final_ans << endl;
}