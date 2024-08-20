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

void Solve(double b, double c) {

	double s = 0, e = (3.14159265359 / 2);
	int count = 0;
	double ans = 0;

	while (s <= e) {

		double mid = (s + e) / 2;

		if (Derivative(mid, b, c) > 0) {
			ans = mid;
			e = mid;
		} else {
			ans = mid;
			s = mid;
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