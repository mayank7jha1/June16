#include<iostream>
using  namespace std;
const int x = 17;

#define x 555

/*
	You make something Constant :
	1. Const keyword
	2. Macros: #define


	constant variables : are those variables jinki
	value ko aap within the scope change nahi kar sakte.

	2. You will always have to initialise a constant variable.
*/

//Global Scope:Defining and Initialisation.
//const int x = 17;


//Reinitialisation: Not Allowed.
// x = 177;


// int y = 90;
// int z = 100;
// int t = 980, l = 400;

int main() {

	// //int x = 98;

	// if (true) {
	// 	x = 789;
	// 	cout << x << endl;
	// 	int x = 677;
	// 	cout << x << endl;

	// 	if (true) {

	// 		x = 9777;
	// 		cout << x << endl;
	// 		int x = 134;
	// 		cout << x << endl;
	// 		x = 897;

	// 	}

	// 	cout << x << endl;
	// }

	cout << x << endl;
}





