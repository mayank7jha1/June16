#include<iostream>
#include<set>
#include<map>
#include<unordered_set>
using  namespace std;

int main() {

	set<string>st;
	unordered_set<string>us;
	map<string, int>mp;


	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		string s;
		cin >> s;
		mp[s] = mp[s] + 1;;
		// st[s](X)
		st.insert(s);
		us.insert(s);
	}

	for (set<string>::iterator it = st.begin(); it != st.end(); it++) {
		cout << (*it) << endl;
	}

	cout << endl;


	for (string x : us) {
		cout << x << endl;
	}


	// cout << s.lower_bound()

	set<int>s2{1, 2, 3, 6, 7, 8};

	cout << (*s2.lower_bound(4));





}