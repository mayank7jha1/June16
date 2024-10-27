#include<iostream>
#include<climits>
using  namespace std;

template<typename T>
class Vector {
private:
	//Data Members
	T *a;   //Dynamic Array
	int ts; //Total Size of my dynamic Array.
	int cs; //Currently How Many elements are there in an Array.

public:

	// Default Constructor
	Vector() {
		ts = 1;
		cs = 0;
		a = new T[ts];
	}

	//Parameterised Constructor
	Vector(int n) {
		ts = n;
		cs = 0;
		a = new T[ts];
	}


	//Member Fuctions
	void push_back(T data) {
		if (cs == ts) {
			T *b = a;
			a = new T[2 * ts];
			ts = ts * 2;

			//Copy  the b  array into a array.
			for (int i = 0; i < cs; i = i + 1) {
				a[i] = b[i];
			}
			delete[] b;
		}

		a[cs] = data;
		cs = cs + 1;
	}


	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	void pop_back() {
		cs = cs - 1;
	}

	T front() {
		return a[0];
	}

	T back() {
		return a[cs - 1];
	}

	T operator[](int index) {
		if (index >= 0 and index <= cs - 1) {
			return a[index];
		} else {
			return INT_MAX;//A Random Value
		}
	}
};