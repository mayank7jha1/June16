#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using  namespace std;

double F(double x, double b, double c) {
	return ((x * x + b * x + c) / sin(x));
}

double Derivative(double x, double b, double c) {
	return ((2 * x + b) * sin(x) - cos(x) * (x * x + b * x + c));
}

/*

	a>0:Upward Facing Unimodal Graph
	F(m1)>F(m2): s=m1
	F(m1)<F(m2): e=m2
	F(m1)==F(m2): s=m1 and e=m2


	a<0 : Downward Facing Unimdal Graph
	F(m1)<F(m2): s=m1
	F(m1)>F(m2): e=m2
	F(m1)==F(m2): s=m1 and e=m2
*/

void Solve(double b, double c) {

	double s = 0, e = (3.14159265359 / 2);
	int count = 0;
	double ans = 0;

	while (s <= e) {

		double m1 = s + (e - s) / 3;
		double m2 = (e - (e - s) / 3);

		if (F(m1, b, c) > F(m2, b, c)) {
			ans = m2;
			s = m1;
		} else if (F(m1, b, c) < F(m2, b, c)) {
			ans = m1;
			e = m2;
		} else {
			ans = m1;
			s = m1, e = m2;
		}

		count = count + 1;
		if (count == 100) {
			break;
		}
	}

	cout << fixed << setprecision(9) << F(ans, b, c) << endl;
}



int main() {
	int t;
	cin >> t;

	while (t > 0) {

		double b, c;
		cin >> b >> c;

		Solve(b, c);
		cout << endl;
		t = t - 1;
	}
}