#include<iostream>
using  namespace std;
char ch[100001];
int k;
int count1 = 0;


int Solve(char x) {


	/*
		Idea:

		I  want to go to every index and want to know the length
		of the desired window from this index.

		Out of all the desired windows length return the maximum.

		Desired window Definition: No of times character that is not
		x occures in the window is less than or equal to k.

	*/

	//Out of all the desired windows length maximum is stored in ans.
	int ans = INT_MIN;

	for (int i = 0; i < count1; i = i + 1) {
		int start = i;
		int end = i;

		/*
			int Not_x_count = Number of times current subarray/substring me
			x nahi aaya i.e koi aur character other than x aaya.
		*/

		int Not_x_count = 0;

		//To find the end point of my desired window I have to
		//apply another loop.

		for (end = i; end < count1; end = end + 1) {

			if (ch[end] != x) {
				Not_x_count = Not_x_count + 1;
			}

			if (Not_x_count > k) {
				break;
			}

		}
		//Now I have the end Point of the desired window starting from
		//i.

		//Length of the current desired window is: end-start

		if (ans < (end - start)) {
			ans = end - start;
		}
	}
	return ans;

}



int main() {
	cin >> count1 >> k;
	cin >> ch;

	//Task 1:
	//I want to change a->b.

	int ans1 = Solve('b');

	//Task2:
	//I want to change b->a.

	int ans2 = Solve('a');

	int final_ans;

	if (ans1 > ans2) {
		final_ans = ans1;
	} else {
		final_ans = ans2;
	}

	cout << final_ans << endl;
}






