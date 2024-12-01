#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<unordered_map>
using  namespace std;


int main() {

	map<string, int>mp;
	map<string, int>mp2 = mp;
	unordered_map<string, int>ump;

	int n;
	cin >> n;
	for (int i = 0; i < n; i = i + 1) {
		string s; int x;
		cin >> s >> x;

		//Insertion
		//mp.insert({s, x});
		ump.insert(make_pair(s, x));

		///Updation
		mp[s] = x;
	}

	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	cout << endl;


	for (pair<string, int> x : ump) {
		cout << x.first << " " << x.second << endl;
	}

	cout << mp["Aman"] << endl;

	/*
		Find Function: Returns an address or it returns
		the iterator to the element you are searching
		and if the element is not present it returns the
		iterator to .end();
	*/

	//log(n) computation in worst case.
	if (mp.find("Samyak") != mp.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	//constant computation in average case.
	if (ump.count("Samyak") == 0) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	vector<int>v{1, 1, 1, 1, 2, 2, 2, 2, 3, 5};
	cout << count(v.begin(), v.end(), 1);

}