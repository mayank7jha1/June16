#include<iostream>
#include<forward_list>
using  namespace std;

int main() {


	//Singly Linked List of int Data.
	forward_list<int>f;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		f.push_front(x);
	}

	f.pop_front();
	cout << f.front() << endl;

	//This is a Container:

	//1. Using Iterators:
	for (forward_list<int>::iterator it = f.begin(); it != f.end(); it++) {
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

	for (int x : f) {
		//Task;
		cout << x << "->";
	}

	cout << "NULL" << endl;


	// stack<int>st;

	// st.push(10);
	// cout << st.pop();



}











// 1 2 3 4 5