#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using  namespace std;

double F(double x, double b, double c) {
	return ((x * x + b * x + c) / sin(x));
}

void Solve(double b, double c) {

	double s = 0, e = (3.14159265359 / 2);
	int count = 0;
	double ans = 0;

	while (s <= e) {

		double mid = (s + e) / 2;
		int er = 0.000001;

		cout << F(mid, b, c) << " " << F(mid + er, b, c) << " " << F(mid - er, b, c) << endl;
		if (F(mid, b, c) < F(mid + er, b, c) and F(mid, b, c) < F(mid - er, b, c)) {
			cout << ans << endl;
			ans = mid;
			break;
		} else if (F(mid, b, c) > F(mid + er, b, c) and F(mid, b, c) < F(mid - er, b, c)) {
			cout << "yy";
			s = mid + er;
		} else if (F(mid, b, c) < F(mid + er, b, c) and F(mid, b, c) > F(mid - er, b, c)) {
			cout << "nn";
			e = mid - er;
		}

		count = count + 1;
		if (count == 100) {
			break;
		}

	}

	cout << fixed << setprecision(7) << ans << endl;
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