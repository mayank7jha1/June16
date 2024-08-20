#include<iostream>
#include<cmath>
#include<iomanip>
using  namespace std;

int main() {

	cout << sin(30) << endl;
	cout << cos(90) << endl;

	//It will round off to the next value/Decimal
	double ans = 4.549;

	cout << fixed << setprecision(5) << ans << endl;


}