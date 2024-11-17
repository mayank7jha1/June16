#include<iostream>
using  namespace std;


template<typename T>
class node {
public:
	string key;
	T value;

	//Next ka Address
	node<T>*next;

	//Constructor
	node() {

	}

	node(string s, int v) {
		value = v;
		key = s;
		next = NULL;
	}

	//Destructor
	~node() {
		if (next != NULL) {
			delete next;
		}
	}
};

template<typename T>
class HashTable {

	node<T>**table;
	int ts;
	int cs;//Ab tak table me kitne element aachuke hain.

	int Hashfunction(string key) {

		int multiply = 1;
		int ans = 0;

		for (int i = 0; i < key.length(); i++) {
			ans += ((key[i] % ts) * (multiply % ts)) % ts;
			multiply = ((multiply % ts) * 29) % ts;
		}

		ans = ans % ts;
		return ans;//Index of the Hashtable.
	}


	void Reshashing() {

		node<T>**OldTable = table;

		table = new node<T>*[2 * ts];
		ts = ts * 2;
		cs = 0;

		for (int i = 0; i < ts; i = i + 1) {
			table[i] = NULL;
		}


		for (int i = 0; i < ts / 2; i = i + 1) {
			node<T>*temp = OldTable[i];
			while (temp != NULL) {
				insert(temp->key, temp->value);
				temp = temp->next;
			}
		}

		delete[]OldTable;

	}


public:

	HashTable(int size = 10) {
		ts = size;
		cs = 0;
		//int  *a=new int[10];
		table = new node<T>*[size];
		for (int i = 0; i < ts; i = i + 1) {
			table[i] = NULL;
		}
	}


	void insert(string key, int value) {

		int HashIndex = Hashfunction(key);

		//Insert At Head in the Linked List at the
		//HashIndex vala Index.

		//Using Constructor
		node<T>*n = new node<T>(key, value);
		cs = cs + 1;

		n->next = table[HashIndex];
		table[HashIndex] = n;

		if ((cs / ts) * 1.0 >= 0.7) {
			Reshashing();
		}
	}

	void Search(string k) {
		int HashIndex = Hashfunction(k);

		node<T>*temp = table[HashIndex];

		while (temp != NULL) {
			if (temp->key == k) {
				cout << temp->key << " " << temp->value << endl;
				return;
			}
			temp = temp->next;
		}
		cout << "-1" << endl;
		return;
	}


	void Print() {

		//I have to Print the entire HashTable:

		for (int i = 0; i < ts; i++) {

			cout << i << "-->";
			node<T>*head = table[i];

			while (head != NULL) {
				cout << head->key << " " << head->value << "-->";
				head = head->next;
			}
			cout << "NULL";

			cout << endl;
		}
	}
};



























