#include<iostream>
#include<climits>
using  namespace std;

int main() {


	int x;

	int ans = INT_MIN; //This variable stores the max value.
	int mini = INT_MAX;

	int sum = 0;

	while (cin >> x) {

		if (ans < x) {
			ans = x;
		}

		if (mini > x) {
			mini = x;
		}

		sum = sum + x;

	}

	cout << ans << endl;
	cout << mini << endl;
	cout << sum << endl;

}





