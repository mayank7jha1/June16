#include<iostream>
#include"Trees.h"
using  namespace std;

int main() {

	node<int>*root = BuildTree();

	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;
	cout << CountNodes(root) << endl;
	cout << SumofNodes(root) << endl;
	cout << Height(root) << endl;

	//Mirror(root);
	Preorder(root);
	cout << endl;

	maxlevel = -1;
	LeftView(root, 0);
	cout << endl;

	maxlevel2 = -1;
	RightView(root, 0);
	cout << endl;

	maxlevel = -1;
	LeftView(root, 0);
	cout << endl;

	PrintKthLevel(root, 3);
	cout << endl;

	PrintALLLevel(root);

}