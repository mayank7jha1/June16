#include<iostream>
using  namespace std;


template<typename T>

class node {

public:
	T data;
	node* left;
	node* right;

	node() {
		left = NULL;
		right = NULL;
	}

	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};