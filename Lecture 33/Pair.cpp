#include<iostream>
#include<utility>
using  namespace std;


void Solve(pair<string, int>&z) {
	return;
}

pair<string, int>Solve1(pair<string, int>&m) {
	// pair<string, int>p{"ZZZZzz", 89797};
	// return p;
	return {"Funny", 100};
}

int main() {


	pair<string, int>p1;
	p1.first = "Mayank";
	p1.second = 100;

	pair<string, int>p2 = {"Atul", 1000};
	pair<string, int>p3{"Samyak", 10900};
	pair <string, int>p4 = make_pair("Ram", 90);

	//General Rules:
	pair<string, int>p5 = p4;

	//Like Every Container Pairs are passed by value.
	Solve(p5);

	//Pair Should be used like a data type.

	pair<pair<string, int>, int>p6{{"Mayank", 100}, 1989};

	// p6.first is a Pair.
	//p6.second is a Int.

	cout << p6.first.first << endl;
	cout << p6.first.second << endl;
	cout << p6.second << endl;

}






















