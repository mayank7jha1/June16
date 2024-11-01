#include<bits/stdc++.h>
#include"Linked_List.h"
using namespace std;



/*
	User Representation of your Linked List
	based on the input data as: 10 20 30 40 50 with insert at head function:

	50->40->30->20->10->NULL;

*/

int main() {

	int n;
	cin >> n;

	node<int>* head = NULL;//This is your Current Linked List Head(Address.)

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;

		//I want Everytime my new data comes my head should change.
		InsertAtHead(head, x);
	}
	Print(head);
	Print(head);
	cout << Length(head) << endl;
	cout << MidPoint1(head) << endl;
	cout << MidPoint2(head)->data << endl;
}