#include<iostream>
#include"Node.h"
using  namespace std;

//Input Method 1:
node<int>*BuildTree() {

	int x;
	cin >> x;

	/*
		This Tree will only
		contain positive integers and
		you are following a preorder
		traversal.
	*/

	//Base Condition
	if (x == -1) {
		return NULL;
	}

	//Task:
	node<int>* root = new node<int>(x);

	//Recursive Condition Accor. to Preorder.
	root->left = BuildTree();
	root->right = BuildTree();

	return  root;
}


void Preorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}


void Postorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Postorder(root->left);
	Postorder(root->right);

	cout << root->data << " ";
}



int CountNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LS = CountNodes(root->left);
	int RS = CountNodes(root->right);

	//Task:
	int ans = LS + RS + 1;
	return ans;
}

int SumofNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LS = SumofNodes(root->left);
	int RS = SumofNodes(root->right);

	int ans = LS + RS + root->data;
	return ans;
}

int Height(node<int>*root) {
	if (root == NULL) {
		return 0;
	}

	int LS = Height(root->left);
	int RS = Height(root->right);

	int ans = max(LS, RS) + 1;
	return ans;
}

void Mirror(node<int>*root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);

	Mirror(root->left);
	Mirror(root->right);
}


int maxlevel = -1;
void LeftView(node<int>*root, int level) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		//I have reached at a unvisited level
		cout << root->data << " ";
		maxlevel = level;
	}

	LeftView(root->left, level + 1);
	LeftView(root->right, level + 1);
}

int maxlevel2 = -1;
void RightView(node<int>*root, int level) {
	if (root == NULL) {
		return;
	}

	if (maxlevel2 < level) {
		//I have reached at a unvisited level
		cout << root->data << " ";
		maxlevel2 = level;
	}

	RightView(root->right, level + 1);
	RightView(root->left, level + 1);
}


//PrintKthLevel: Level is given 1 Based.
void PrintKthLevel(node<int>*root, int k) {

	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
	}

	PrintKthLevel(root->left, k - 1);
	PrintKthLevel(root->right, k - 1);
}


/*
	Print The entire Tree Level By Level
	Computation: n*n: (No of nodes = n).
*/
void PrintALLLevel(node<int>*root) {

	if (root == NULL) {
		return;
	}

	int LevelCount = Height(root);

	for (int i = 1; i <= LevelCount; i = i + 1) {
		PrintKthLevel(root, i);
		cout << endl;
	}
}


//Diameter of a Tree:















