#include<iostream>
#include<algorithm>
#include<string>//Whenever You are using a container you 
//have to include its library.
using  namespace std;


// string operator+(string s) {

// 	p


// }


string Solve(string &rep) {

	return  rep;
}

int main() {

	//Treat Containers as Data Type.

	int x = 10;
	// cin >> x;
	// cout << x << endl;

	// cin.ignore();


	//Collections of Characters.
	//It is made from character array and functionalities.

	//string s = "Mayank";

	string s1;
	//cin >> s1;
	// cout << s1 << endl;
	getline(cin, s1);
	cout << s1 << endl;
	// cin.get()


	string p = s1;

	p.push_back('A');
	// p.push_back("abc");//Not Valid.

	//Append:
	p = p + 'C';
	p = p + "Abx";
	p = "Atul" + p;//+ Operator which is overloaded
	//Operator Overloading

	//p = p + s1;

	//s1.operator + (p);


	//cout << p << " " << s1 << endl;

	// cout.operator << (p);

	// cout << " " << s1 << endl;

	// cout.operator << (" ");

	// cout << s1 << endl;

	// cout.operator << (s1);

	// cout << endl;
	// cout.operator << (endl);


	cout << p << endl;

	//Substring/Subarray:
	//A Part/String itself taking in
	//continous manner in a single direction.

	cout << p.substr(4, 5) << endl;


	//Iterator: begin():
	//end()
	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());

	cout << p << endl;

	//By Default you can return  any container from  a function.
	//By Default every container is passed by value.
	//Pass by Address(X).
	string s = Solve(p);

	cout << s << endl;

}