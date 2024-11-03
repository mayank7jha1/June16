#include<bits/stdc++.h>
#include"../Lecture 34/Linked_List.h"
using namespace std;

int main() {

	int n;
	cin >> n;

	node<int>* head = NULL;//This is your Current Linked List Head(Address.)

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}


	Print(head);
	Print(head);
	cout << Length(head) << endl;
	cout << MidPoint1(head) << endl;
	cout << MidPoint2(head)->data << endl;
	cout << MidPoint3(head) << endl;
	cout << MidPoint4(head) << endl;

	cout << SearchIteratively(head, 140) << endl;
	cout << SearchRecursively(head, 140) << endl;

	ReverseIteratively(head);
	Print(head);
}