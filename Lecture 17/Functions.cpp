#include<iostream>
using  namespace std;
//Derived Data Type: Functions.
/*
	1. Function Prototype
	2. Function Definition
	3. Function Call
*/


//Function Definition

//Return ka data type  Name(data types of the argument){


// return something that is same as the return type of the
//function
// }

//Function Definition
// int Sum(int a, int b) {
// 	return a + b;
// }

// int Sum(int a, int b, int c) {
// 	return a + b + c;
// }

int Sum(int a, int b, int c = 0, int d = 0) {
	return a + b + c + d;
}

// int Sum(int x) {
// 	return x;
// }

// double Sum(int a, double b, int c) {
// 	return a + b + c;
// }

// double Sum(int a, int b, double c = 0, double d = 0) {
// 	return a + b + c + d;
// }

// template<typename T1, typename T2>
// T2 Sum(T1 a = 0, T1 b = 0, T1 c = 0, T1 d = 0) {
// 	return a + b + c + d;
// }

// template<typename T>
// T Sum() {

// }




int main() {

	int n;
	cin >> n;

	cout << n << endl;

	//Function Call(Parameters)

	for (int i = 0; i < 5; i = i + 1) {
		cout << "Mayank" << endl;
	}

	// int a, b;
	// cin >> a >> b;

	// cout << a + b << endl;


	// int  a, int b;


	// int a, b;

	// int x = Sum(34, 98);//Function Call
	// cout << Sum(76, 661);
	// cout << x << endl;


	cout << Sum<int, int>(10, 13) << endl;
	cout << Sum<double, double>(19, 65, 167) << endl;
	cout << Sum<int, int>(34, 7, 1, 9) << endl;
	cout << Sum<int, double>(13, 11.7, 12) << endl;
	cout << Sum<double, double>(14, 67, 11.6, 97.2) << endl;


}






