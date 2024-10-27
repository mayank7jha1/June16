#include<iostream>
#include"Vector.h"
using  namespace std;

int main() {

	Vector<int>v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < v.size(); i = i + 1) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;

	v.pop_back();

	cout << v.size() << endl;
	cout << v.capacity() << endl;
	for (int i = 0; i < v.size(); i = i + 1) {
		cout << v[i] << " ";
	}

}