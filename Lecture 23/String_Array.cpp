#include<iostream>
#include<algorithm>
using  namespace std;

int main() {


	// int a[] {2, 3, 4, 5, 6, 7, 8};

	// cout << a << endl;
	// cout << *(a + 0) << endl;
	// cout << a[0] << endl;

	// string s[] {"Mayank", "Samyak", "Rahul"};

	// string s1 = "Atul";

	// cout << s1[2] << endl;
	// cout << s1 << endl;

	// cout << *s << endl;
	// cout << *(s + 0) << endl;
	// cout << s[0] << endl;


	// cout << s1.length() << endl;

	// // cout << s.length() << endl;

	// cout << sizeof(int) << endl;

	// int n = sizeof(a) / sizeof(int);


	int n = 3;

	string s[] {"Mayank", "Samyak", "Rahul"};

	//cout << s[0] << endl;

	string s1 = "Atul";
	// cout << s1[0] << endl;


	// //Two Dimentional Array.
	// cout << s[0][0] << endl;


	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << s[i] << endl;
	// }

	// for (int i = 0; i < n; i = i + 1) {

	// 	string cs = s[i];

	// 	for (int j = 0; j < cs.length(); j = j + 1) {
	// 		cout << cs[j] << " ";
	// 	}

	// 	cout << endl;
	// }


	// sort(s, s + n);


	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << s[i] << endl;
	// }


	for (int i = 0; i < n; i = i + 1) {
		// string cs = s[i];
		sort(s[i].begin(), s[i].end());
		//s[i] = cs;
	}


	for (int i = 0; i < n; i = i + 1) {
		cout << s[i] << endl;
	}

}










