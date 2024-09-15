#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;


/*
	You are going to Represent n pairs as:
	(first[i],second[i]) where i goes from
	1 to n.
*/
/*

	S1: Will contain indices of the pairs
	of sequence 1.

	and same for S2.
*/




vector<int>S1, S2;
vector<int>first, second;


/*
	This is for Sequence 1.
*/
bool C1(int x, int y) {
	//Mera Current Pair is: (first[x],second[x])--->(first[y],second[y])
	if (second[x] > second[y]) {
		return true;
	} else {
		return false;
	}
}

/*
	This is for Sequence 1.
*/
bool C2(int x, int y) {
	//Mera Current Pair is: (first[x],second[x])--->(first[y],second[y])
	if (first[x] < first[y]) {
		return true;
	} else {
		return false;
	}
}


int32_t main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x, y;
		cin >> x >> y;
		first.push_back(x);
		second.push_back(y);

		if (first[i] < second[i]) {
			S1.push_back(i);
		} else {
			S2.push_back(i);
		}
	}

	if (S1.size() > S2.size()) {
		//Sort this S1 on the Second Value
		// of the pairs in the sequence in Desc. Order.
		sort(S1.begin(), S1.end(), C1);

		cout << S1.size() << endl;

		for (int i = 0; i < S1.size(); i = i + 1) {
			cout << S1[i] + 1 << " ";
		}

	} else {
		sort(S2.begin(), S2.end(), C2);
		cout << S2.size() << endl;
		for (int i = 0; i < S2.size(); i = i + 1) {
			cout << S2[i] + 1 << " ";
		}
	}
}