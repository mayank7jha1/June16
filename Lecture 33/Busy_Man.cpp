#include<iostream>
#include<algorithm>
using  namespace std;

class Activity {
public:
	int ST;
	int ET;
};

Activity a[100002];

bool compare(Activity x, Activity y) {

	//If two Activities have the same end point
	//it does not matter how you sort it but
	//currently i am sorting in asc. orrder baseed
	//on the starting time.
	if (x.ET == y.ET) {
		if (x.ST < y.ST) {
			return true;
		} else {
			return false;
		}
	}


	//We have to sort asc. on  the basis of end time
	//of different activities.
	if (x.ET < y.ET) {
		return true;
	} else {
		return false;
	}
}

void Solve(int n) {

	sort(a, a + n, compare);

	int count = 1;
	int previous_end_time = a[0].ET;

	for (int i = 1; i < n; i = i + 1) {

		if (a[i].ST >= previous_end_time) {
			count = count + 1;
			previous_end_time = a[i].ET;
		}

	}

	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while (t > 0) {

		int n;
		cin >> n;

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i].ST >> a[i].ET;
		}

		Solve(n);
		t = t - 1;
	}
}