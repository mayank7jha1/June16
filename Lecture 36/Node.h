#include<bits/stdc++.h>
using namespace std;


/*
	This File contains the definition of your defined data type node that
	will contain two things the data + the address of the next similar block.
*/

template<typename T>
class node {
public:
	//Data Members:
	T data;
	node* next;

	//Default Constructor
	node() {
		next = NULL;
	}

	//Constructor: Parameterised Constructor
	node(T inputdata) {
		data = inputdata;
		next = NULL;
	}
};