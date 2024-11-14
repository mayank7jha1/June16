#include<iostream>
#include<list>
using  namespace std;

int main() {


	//Doubly Linked List of int Data.
	list<int>l;
	list<int>l2;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		l.push_front(x);
		l2.push_back(x);
	}

	l.pop_back();
	l.pop_front();
	cout << l.front() << endl;
	cout << l.back() << endl;

	//This is a Container:

	//1. Using Iterators:
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << "->";
	}
	cout << "NULL" << endl;

	//2. For Each Loop:

	/*
		For every element of this container that is going
		to be represented as "x" , I want to perform
		some task;

		Internally For Each is also operated as Iterators.
		For Each is only and only for every element of the
		container.
	*/

	for (int x : l) {
		//Task;
		cout << x << "->";
	}

	cout << "NULL" << endl;

}











// 1 2 3 4 5