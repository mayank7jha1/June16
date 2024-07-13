#include<iostream>
using  namespace std;

int main() {

	//Variable Definition
	//Object Instantiation.
	//Variables: Named Objects.
	//Variables: Data and Properties.
	int n;
	cin >> n;

	int count = 2;
	int flag = 0;

	while (count <= n - 1) {

		if ((n % count) == 0) {
			flag = 1;
		}

		count = count + 1;
	}

	if (flag == 1) {
		cout << "Not Prime" << endl;
	} else {
		cout << "Prime" << endl;
	}

}














