#include<iostream>
using  namespace std;


int main() {

	char ch[102];
	cin >> ch;
	//cout << ch << endl;

	int nb, ns, nc;
	cin >> nb >> ns >> nc;

	int pb, ps, pc;
	cin >> pb >> ps >> pc;

	long long r;
	cin >> r;

	int sb = 0, ss = 0, sc = 0;

	for (int i = 0; ch[i] != '\0'; i = i + 1) {
		if (ch[i] == 'B') {
			sb = sb + 1;
		} else if (ch[i] == 'S') {
			ss = ss + 1;
		} else {
			sc = sc + 1;
		}
	}

	//cout << sb << " " << ss << " " << sc << endl;

	//Define the Search Space:
	long long s = 0, e = 1e13;

	long long ans = 0; //Maximum Amount of Hamburger I can make for this test case.

	while (s <= e) {

		long long mid = (s + e) / 2;

		//Find out Mid amount of hamburger banane ke liye kitne paise
		//chahiye.

		long long BM = (((sb * mid) - nb) * pb);
		if (BM < 0) {
			BM = 0;
		}

		long long SM = (((ss * mid) - ns) * ps);
		if (SM < 0) {
			SM = 0;
		}

		long long CM = (((sc * mid) - nc) * pc);
		if (CM < 0) {
			CM = 0;
		}

		long long TM = BM + SM + CM;


		if (TM <= r) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}

	cout << ans << endl;

}




/*
	Find SS?
	Kya main  mid amount of hamburger bana sakta hu?
	mujhe mid amount of hamburger ke liye kitna paisa chahiye?
*/





