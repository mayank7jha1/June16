#include<bits/stdc++.h>
#include"Node.h"
using namespace std;


/*
	Your head is a pointer in static memory which is
	being passed as value through the function InsertAtHead by the
	user. But you have changed the value of head and you want
	it to reflect through the program even after the function call of
	InsertAtHead function is over.

	Hence You will have to pass your head variable through Pass by Address
	or Pass by Reference.



*/
void InsertAtHead(node<int>*&head, int x) {
	node<int>*n = new node<int>(x);
	n->next = head;
	head = n;
}


//Iterate over my Linked List
void Print(node<int>*&head) {

	// while (head != NULL) {
	// 	cout << head->data << "-->";
	// 	head = head->next;
	// }
	node<int>*temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int Length(node<int>*head) {
	int l = 0;

	while (head != NULL) {
		l = l + 1;
		head = head->next;
	}
	return l;
}


//MidPoint As a Value
int MidPoint1(node<int>*head) {
	int ans = Length(head);
	ans = ans / 2;

	while (ans > 0) {
		head = head->next;
		ans = ans - 1;
	}

	return head->data;
}

//MidPoint As a Node.
node<int>* MidPoint2(node<int>*head) {
	int ans = Length(head);
	ans = ans / 2;

	while (ans > 0) {
		head = head->next;
		ans = ans - 1;
	}

	return head;
}


// 50->40->30->20->10->NULL;

// head ke pass address hain 50 ka.
// head=50

// head=40

// head=30

// head=20

// head=10

// head=NULL