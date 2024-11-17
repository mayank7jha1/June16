#include<iostream>
#include"Hashmap.h"
using  namespace std;

int main() {

	int n;
	cin >> n;

	HashTable<int>T;

	for (int i = 0; i < n; i = i + 1) {
		string key;
		int value;
		cin >> key >> value;
		T.insert(key, value);
	}

	T.Print();

}