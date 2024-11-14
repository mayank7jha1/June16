#include<iostream>
#include"LL.h"
using  namespace std;

int main() {

	node<int>*head = NULL;

	/*
		Original LL: 1->2->3->4->5->NULL;
		Reverse  LL: 5->4->3->2->1->NULL;
	*/
	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	//Print(head);
	//node<int>*head2 = ReverseRecursively(head);
	//ReverseIteratively(head);
	//Print(head2);

	cout << IsCycle(head) << endl;;
	CycleCreation(head);
	cout << IsCycle(head) << endl;
	BreakCycle(head);
	cout << IsCycle(head) << endl;

}






