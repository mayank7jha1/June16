#include<iostream>
#include"../Lecture 37/Trees.h"
using  namespace std;

int main() {

	// node<int>*root = BuildTree();

	// Preorder(root);
	// cout << endl;
	// Inorder(root);
	// cout << endl;
	// Postorder(root);
	// cout << endl;
	// cout << CountNodes(root) << endl;
	// cout << SumofNodes(root) << endl;
	// cout << Height(root) << endl;

	// //Mirror(root);
	// Preorder(root);
	// cout << endl;

	// maxlevel = -1;
	// LeftView(root, 0);
	// cout << endl;

	// maxlevel2 = -1;
	// RightView(root, 0);
	// cout << endl;

	// maxlevel = -1;
	// LeftView(root, 0);
	// cout << endl;

	// PrintKthLevel(root, 3);
	// cout << endl;

	// PrintALLLevel(root);

	// cout << Diameter1(root) << endl;
	// cout << DT << endl;

	// cout << Diameter2(root) << endl;

	// cout << Diameter3(root).diameter << " " << Diameter3(root).height << endl;

	// cout << HeightBalanced(root).first << " " << HeightBalanced(root).second << endl;


	// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// node<int>*root2 = HBT(a, 0, 9);

	// Preorder(root2);
	// cout << endl;

	node<int>*root3 = BuildBST();
	Inorder(root3);
	cout << endl;

	cout << SearchInBST(root3, 24) << endl;
	PrintRange(root3, 5, 16);

}






