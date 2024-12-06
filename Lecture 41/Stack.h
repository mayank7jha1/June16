#include<iostream>
using  namespace std;
#define MAX 1000

//Stack using an Array.
template<typename T>
class Stack {
public:

	T a[MAX];
	T index;

	Stack() {
		index = -1;
	}


	void push(T x) {
		if (index >= MAX - 1) {
			return;
		}
		index = index + 1;
		a[index] = x;
		return;
	}

	void pop() {
		if (index == -1) {
			return;
		} else {
			index = index - 1;
		}
	}

	bool empty() {
		if (index == -1) {
			return 1;
		} else {
			return 0;
		}
	}

	T top() {
		if (index == -1) {
			return -1;
		} else {
			return a[index];
		}
	}

};

