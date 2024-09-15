#include<iostream>
#include<vector>
using  namespace std;

int main() {

	string s;

	vector<int>v;
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	vector<int>v1{1, 2, 3, 4, 5};
	vector<int>v2 = {3, 4, 5, 5, 6, 7};
	vector<int>v3 = v2;

	int n;
	cin >> n;

	//vector<int>a;

	vector<int>a(n, 0);

	a.resize(10);

	for (int i = 0; i < n; i = i + 1) {

		int x;
		cin >> x;
		a.push_back(x);
		//cin >> a[i];

	}

	for (int i = 0; i < a.size(); i = i + 1) {
		cout << a[i] << " ";
	}

}



// 8 8 8 8 8 8



// 15