#include<iostream>
#include"Node.h"
#include<algorithm>
#include<climits>
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
int DT = 0;

//This Function Actually Return Height but
///we are calculating the diameter simultaneously.

//Computation: Linear (~no of nodes).
int Diameter1(node<int>*root) {

	//Base Condtion:
	if (root == NULL) {
		return 0;
	}

	int LSTH = Diameter1(root->left);
	int RSTH = Diameter1(root->right);

	DT = max(DT, LSTH + RSTH);

	return 1 + max(LSTH, RSTH);
}

//Basic:
//This Function Actually Returns the Diameter.

//Computation: (n*n): where n is no of nodes.
int Diameter2(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	//Diameter occurs in Left Subtree.
	int Op1 = Diameter2(root->left);

	//Diameter occurs in Right Subtree.
	int OP2 = Diameter2(root->right);

	//Diameter Passes through root node.
	int Op3 = Height(root->left) + Height(root->right);

	return max({Op1, OP2, Op3});
	//return max(Op1, max(OP2, Op3));
}

class Pair1 {
public:
	int height;
	int diameter;

	Pair1() {
		height = 0;
		diameter = 0;
	}
};

//Computation: (~n).
Pair1 Diameter3(node<int>*root) {

	Pair1 p;
	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}


	Pair1 LSTHD = Diameter3(root->left);
	Pair1 RSTHD = Diameter3(root->right);


	//First Calculate Diameter:
	int Op1 = LSTHD.diameter;
	int Op2 = RSTHD.diameter;
	int Op3 = LSTHD.height + RSTHD.height;

	p.diameter = max({Op1, Op2, Op3});

	//Then Calculate Height.
	p.height = 1 + max(LSTHD.height, RSTHD.height);

	return p;
}

//Height Balanced Tree:

/*
	For Every Subtree Left subtree height-Right subtree height should
	be -1,0,1.

	In the given pair below p.first represents the
	height and p.second represent isbalanced variable which
	tell me uptill now my tree is balanced or not.

*/

pair<int, bool>HeightBalanced(node<int>*root) {

	pair<int, bool>p;
	if (root == NULL) {
		p.first = 0;
		p.second = 1;
		return p;
	}

	pair<int, bool>LSTHI = HeightBalanced(root->left);
	pair<int, bool>RSTHI = HeightBalanced(root->right);

	//Calculate Height.
	p.first = 1 + max(LSTHI.first, RSTHI.first);

	//Check for HeightBalanced.

	if (LSTHI.second == 1 and RSTHI.second == 1 and
	        abs(LSTHI.first - RSTHI.first) <= 1) {
		p.second = 1;
	} else {
		p.second = 0;
	}

	return p;
}


//Given An array of Input Create a HeightBalancedTree.
node<int>* HBT(int *a, int s, int e) {

	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;
	node<int>*root = new node<int>(a[mid]);

	root->left = HBT(a, s, mid - 1);
	root->right = HBT(a, mid + 1, e);

	return root;
}



node<int>* InsertInBST(node<int>*root, int d) {

	if (root == NULL) {
		root = new node<int>(d);
		return root;
	}

	if (root->data < d) {
		root->right = InsertInBST(root->right, d);
	} else {
		root->left = InsertInBST(root->left, d);
	}

	return root;
}


node<int>*BuildBST() {
	int x;
	cin >> x;

	node<int>*root = NULL;

	while (x != -1) {
		root = InsertInBST(root, x);
		cin >> x;
	}

	return root;
}


bool SearchInBST(node<int>*root, int key) {

	if (root == NULL) {
		return false;
	}

	if (root->data == key) {
		return true;
	} else if (root->data < key) {
		return SearchInBST(root->right, key);
	} else {
		return SearchInBST(root->left, key);
	}
}


void PrintRange(node<int>*root, int key1, int key2) {

	if (root == NULL) {
		return;
	}

	//Inorder Traversal.

	if (root->data >= key1 and root->data <= key2) {
		cout << root->data << " ";
	}

	if (root->data < key1) {
		PrintRange(root->right, key1, key2);
	} else if (root->data >= key1 and root->data <= key2) {
		PrintRange(root->right, key1, key2);
		PrintRange(root->left, key1, key2);
	} else {
		PrintRange(root->left, key1, key2);
	}

}


bool IsBST(node<int>*root, int mini = INT_MIN, int maxi = INT_MAX) {

	if (root == NULL) {
		return true;
	}


	if (root->data >= mini and root->data <= maxi and IsBST(root->left, mini, root->data) == 1 and IsBST(root->right, root->data, maxi) == 1) {
		return true;
	}


	return false;
}


int Pre_Index = 0;//Global Variable
node<int>*BuildTreeFromPreAndIn(int* pre, int *in, int s, int e) {

	//static int Pre_Index = 0;//Static Variable
	//const int Pre_Index=0;//Constant Variable
	if (s > e) {
		return NULL;
	}

	int element = pre[Pre_Index];


	//Task:
	node<int>*root = new node<int>(element);
	Pre_Index = Pre_Index + 1; //2

	//Search this element in the Inoder Array from range [s,e];
	int Inorder_Index = -1;

	for (int i = s; i <= e; i++) {
		if (in[i] == element) {
			Inorder_Index = i;
			break;
		}
	}


	//Ask Recursion to do the rest.

	root->left = BuildTreeFromPreAndIn(pre, in, s, Inorder_Index - 1);
	root->right = BuildTreeFromPreAndIn(pre, in, Inorder_Index + 1, e);

	return root;

}










