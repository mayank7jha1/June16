#include<iostream>
using  namespace std;
char ch[100001];

int k;
int count1 = 0;

int Solve(char x) {

	int ans = INT_MIN;

	for (int i = 0; i < count1; i = i + 1) {

		int start = i;
		int end;

		int Not_x_count = 0;

		for (end = i; end < count1; end = end + 1) {

			if (ch[end] != x) {
				Not_x_count = Not_x_count + 1;
			}

			if (Not_x_count > k) {
				break;
			}

		}

		if (ans < (end - start)) {
			ans = end - start;
		}

	}
	return ans;

}

int main() {

	cin >> count1 >> k;
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






