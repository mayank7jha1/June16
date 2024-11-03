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

//Middle Point as value and In case of even linked list we are returing second middle point.
int MidPoint3(node<int>*head) {

	node<int>*fast = head;
	node<int>*slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	//You have the middle Point.
	return slow->data;
}


//Middle Point as value and In case of even linked list we are returing first middle point.
int MidPoint4(node<int>*head) {

	node<int>*fast = head->next;//Different from Midpoint3.
	node<int>*slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	//You have the middle Point.
	return slow->data;
}

//Iteratively and Recursively Search a Key in Linked List.

bool SearchIteratively(node<int>*head, int key) {

	while (head != NULL) {

		if (head->data == key) {
			return true;
		}

		head = head->next;
	}

	return false;
}


/*
	1.  F(): I want to search a node value from the head(50) to the end of the Linked list.
	2.  G(): I want to search a node value from a different head(30) to the end of the Linked List.

	1. F(head(50)); //State
	2. F(head(30)); //State

	50->40->30->20->10->NULL;

	head=50;//I am here talking about the address i.e. head is a pointer and I am storing the address of the node 50 in head but for simplicity I am writing it as head=50.

	F(50): This will return true or false.

	F(50)=I will check the current node i.e if 50 is equal to key or not and ask recursion to do the same.

	F(50)=Some Work + F(40);

*/

bool SearchRecursively(node<int>*head, int key) {

	//Base Conditon:
	if (head == NULL) {
		return false;
	}

	//Work
	if (head->data == key) {
		return true;
	}

	//Recursion:
	return SearchRecursively(head->next, key);
}

void ReverseIteratively(node<int>*&head) {

	node<int>*prev = NULL;
	node<int>*current = head;
	node<int>*n = NULL; //Random: I want to avoid Giving a Pointer a garbage value.

	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}

	head = prev;
	return;
}


// 50->40->30->20->10->NULL;

// head ke pass address hain 50 ka.
// head=50

// head=40

// head=30

// head=20

// head=10

// head=NULL
