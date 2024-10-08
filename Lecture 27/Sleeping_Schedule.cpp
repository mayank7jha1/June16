#include<iostream>
using  namespace std;
int n, h, l, r;
int a[2001];

/*
	F(0,0): Maximum number of good sleeps
	from 0 index to n-1 index in the a array
	and with current waking up time being
	0.


*/


int F(int index, int Waking_Time) {


	if (index == n) {
		return 0;
	}

	/*
		Next Sleep Kya Good hain ye pata karo.
		Lekin next sleep karne ke do raste hain.
	*/

	/*

		x ka matlab hain abhi ghadi me waking_hour
		jitna time horaha hain and main a[i] hour
		ke baad jata hu sone toh  gadi me jo time
		hoga vo maine x ke ander store kara hain.

		y ka matlab hain abhi ghadi me waking_hour
		jitna time horaha hain and main (a[i]-1) hour
		ke baad jata hu sone toh  gadi me jo time
		hoga vo maine y ke ander store kara hain.

	*/

	int x = (a[index] + Waking_Time) % h;
	int y = (a[index] - 1 + Waking_Time) % h;

	/*
		int ans1: Maine iske ander store kara hain
		ki agar main a[i]+waking hour par uthta hu
		toh vo sleep good hogi ki nahi.
		iska matlab ans1 can only be 0/1.
		i.e jo ye upar vala x time tha vo good tha ki nahi.

		int ans2= Maine iske ander store kara hain
		ki agar main (a[i]-1)+waking hour par uthta hu
		toh vo sleep good hogi ki nahi.
		iska matlab ans2 can only be 0/1.
		i.e jo ye upar vala y time tha vo good tha ki nahi.
	*/

	int ans1 = 0;
	int ans2 = 0;

	if (x >= l and x <= r) {
		ans1 = 1;
	}

	if (y >= l and y <= r) {
		ans2 = 1;
	}


	int Op1 = ans1 + F(index + 1, x);
	int Op2 = ans2 + F(index + 1, y);

	return max(Op1, Op2);
}


int main() {
	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	//Starting Point.
	cout << F(0, 0) << endl;


}