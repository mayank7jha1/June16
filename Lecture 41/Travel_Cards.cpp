#include<iostream>
#include<map>
#include<vector>
using  namespace std;
int n, a, b, k, f;

bool compare(int x, int y) {
	return (x > y);

	// if (x > y) {
	// 	return true;
	// } else {
	// 	return false;
	// }
}

int Travel_Cards() {

	map<pair<string, string>, int>route;

	//n-->Trips.
	string prev_end_point = "";
	int Current_Trip_Cost = 0;

	for (int i = 0; i < n; i = i + 1) {
		string start, end;
		cin >> start >> end;

		if (start == prev_end_point) {
			//This trip is a transshipment.
			Current_Trip_Cost = b;
		} else {
			Current_Trip_Cost = a;
		}

		prev_end_point = end;

		if (start > end) {
			swap(start, end);
		}

		route[ {start, end}] = route[ {start, end}] +
		                       Current_Trip_Cost;
	}


	// for (pair<pair<string, string>, int> x : route) {
	// 	cout << x.first.first << " " << x.first.second << " " <<
	// x.second << endl;
	// }

	vector<int>cost;
	int Total_Cost = 0;

	for (auto x : route) {
		Total_Cost = Total_Cost + x.second;
		cost.push_back(x.second);
	}

	//sort(cost.begin(), cost.end(), compare);
	sort(cost.rbegin(), cost.rend());//This is the most effective.
	//sort(cost.begin(), cost.end());
	//reverse(cost.begin(), cost.end());


	for (int i = 0; i<cost.size() and k>0; i = i + 1) {
		if (f >= cost[i]) {
			break;
		}
		Total_Cost = Total_Cost - cost[i] + f;
		k = k - 1;
	}

	return Total_Cost;
}


int main() {
	cin >> n >> a >> b >> k >> f;
	cout << Travel_Cards() << endl;
}