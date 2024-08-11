#include<iostream>
using  namespace std;



int main() {


	// char ch;
	// while (cin >> ch) {
	// 	cout << ch;
	// }

	// char ch = 'A';

	// int a[] {3, 2, 3, 4, 1, 5};

	// char ch1[] {'M', 'a', 'y', 'a', 'n', 'k'};
	// cout << ch1[4] << endl;

	// for (int i = 0; i < 6; i = i + 1) {
	// 	cout << ch1[i];
	// }

	// int n;
	// cin >> n;
	// char ch[n];

	// // for (int i = 0; i < n; i = i + 1) {
	// // 	cin >> ch[i];
	// // }

	// cin >> ch;

	// cout << ch << endl;

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << ch[i];
	// }


	//char ch[] {'M', 'a', 'y', '\0'};

	//cout << ch << endl;

	// char ch[] {"May"};
	// cout << ch << endl;

	/*
		'\0': NULL Character

	*/

	// int length = 0;
	// for (int i = 0; ch[i] != '\0'; i = i + 1) {
	// 	length = length + 1;
	// }

	// cout << length << endl;


	// int  n;
	// cin >> n;

	// char ch[n];
	// cin >> ch;

	// int count = 0;

	// for (int i = 0; i < n; i = i + 1) {
	// 	if (ch[i] == 'a') {
	// 		count = count + 1;
	// 	}
	// }

	// cout << count << endl;

	//char ch[100];

	// char x;
	// int i = 0;

	// while (cin >> x) {
	// 	ch[i] = x;
	// 	i = i + 1;
	// }

	// ch[i] = '\0';

	// cout << ch << endl;


	char ch[100];
	//cin >> ch;
	cin.getline(ch, 100, '.');
	cout << ch << endl;

}


















