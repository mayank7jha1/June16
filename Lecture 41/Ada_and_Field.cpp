#include<iostream>
#include<set>
#include<vector>
using  namespace std;

int main() {
	int t;
	cin >> t;
	//cout << t << endl;

	while (t > 0) {

		int n, m, q;
		cin >> n >> m >> q;
		//cout << n << " " << m << " " << q << endl;

		multiset<int>x, y, sx, sy;

		x.insert(0);
		x.insert(n);
		y.insert(0);
		y.insert(m);

		sx.insert(n);
		sy.insert(m);


		for (int i = 0; i < q; i = i + 1) {
			int a, b;
			cin >> a >> b;


			if (a == 0) {
				//Vertical Line Marni hain.

				if (x.find(b) != x.end()) {
					//I have already marked a line at this
					//co-ordinate, so  I don't need to do
					//anything just print out the value.

					int Largest_X_Segment = *(--sx.end());
					int Largest_Y_Segment = *(--sy.end());
					int area = Largest_X_Segment * Largest_Y_Segment;
					cout << area << endl;
					continue;
				}

				auto sm = (x.lower_bound(b));
				sm--;
				int small = *sm;
				int large = *(x.upper_bound(b));



				//Erase Function works on  iterator.
				int length = large - small;

				//cout << small << " " << large << endl;
				sx.erase(sx.find(length));

				sx.insert(b - small);
				sx.insert(large - b);

				x.insert(b);

				//cout << small << " " << large << endl;


				int Largest_X_Segment = *(--sx.end());
				int Largest_Y_Segment = *(--sy.end());
				int area = Largest_X_Segment * Largest_Y_Segment;
				cout << area << endl;


			} else {
				//Horizontal Line Marni hain.
				if (y.find(b) != y.end()) {
					//I have already marked a line at this
					//co-ordinate, so  I don't need to do
					//anything just print out the value.

					int Largest_X_Segment = *(--sx.end());
					int Largest_Y_Segment = *(--sy.end());
					int area = Largest_X_Segment * Largest_Y_Segment;
					cout << area << endl;
					continue;
				}


				// int small = *((y.lower_bound(b))--);

				auto sm = ((y.lower_bound(b)));
				sm--;
				int small = *sm;

				int large = *(y.upper_bound(b));

				//Erase Function works on  iterator.
				int length = large - small;
				sy.erase(sy.find(length));

				sy.insert(b - small);
				sy.insert(large - b);

				y.insert(b);
				//cout << small << " " << large << endl;

				int Largest_X_Segment = *(--sx.end());
				int Largest_Y_Segment = *(--sy.end());
				int area = Largest_X_Segment * Largest_Y_Segment;
				cout << area << endl;
			}
		}

		t = t - 1;
	}

}