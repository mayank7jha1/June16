#include<iostream>
#include<climits>
using  namespace std;

int n;
int Total_Time;
int a[100001];

int Books() {

	int start = 0;

	int Time_Consumed = 0;
	int Maximum_Books = 0;

	for (int end = 0; end < n; end = end + 1) {

		//Expansion
		Time_Consumed = Time_Consumed + a[end];


		//Shrink If you are at undesired Window.
		while (start <= end and Time_Consumed > Total_Time) {
			Time_Consumed = Time_Consumed - a[start];
			start = start + 1;
		}

		//Updation
		if (Maximum_Books < end - start + 1) {
			Maximum_Books = end - start + 1;
		}
	}

	return Maximum_Books;
}

int32_t main() {

	cin >> n >> Total_Time;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	cout << Books() << endl;


}







