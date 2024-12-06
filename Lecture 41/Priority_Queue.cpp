#include<iostream>
#include<queue>
#include<stack>
#include<queue>
using  namespace std;

int main() {
	//Container Adapters.
	priority_queue<int>pq;//Max Heap
	priority_queue<int, vector<int>, greater<int>>mini;//Min Heap
	stack<int>st;//Stack
	queue<int>q;//Queue

	/*
		Push:
		Top:
		Pop:
	*/

	int n;
	cin >> n;

	//nlogn
	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;

		//Heapify Process will follow.
		pq.push(x);
		mini.push(x);

		st.push(x);
		q.push(x);

	}

	//Heapify
	while (pq.empty() == 0) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;

	while (!mini.empty()) {
		cout << mini.top() << " ";
		mini.pop();
	}

	cout << endl;

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	cout << endl;

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}


}