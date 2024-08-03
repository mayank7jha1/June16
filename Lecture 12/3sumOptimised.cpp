#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		int b[n];
		for (int i = 0; i < n; i = i + 1) {
			cin >> b[i];
			b[i] = b[i] % 10;
		}

		int freq[10] {0};

		for (int i = 0; i < n; i = i + 1) {
			int element = b[i];
			freq[element] = freq[element] + 1;

			if (freq[element] > 3) {
				freq[element] = 3;
			}
		}

		//Contruct the Triple Loop Array.
		int a[30] {0};
		int l = 0;//Current index in the a array
		//that you are trying to build.

		//Iterate over Frequency Array.
		for (int i = 0; i <= 9; i = i + 1) {

			int element = i;
			int ItsFrequency = freq[i];

			while (ItsFrequency > 0) {

				a[l] = element;
				l = l + 1;

				ItsFrequency = ItsFrequency - 1;
			}
		}

		//L is the index or the actual size of
		//array a.

		//Logic

		int flag = 0;

		for (int i = 0; i < l - 2; i = i + 1) {
			//First Point of my  triplet is: a[i]:

			for (int j = i + 1; j < l - 1; j = j + 1) {
				//Second Point of my triplet is: a[j]:

				for (int k = j + 1; k < l; k = k + 1) {
					//Third Point of my triplet is: a[k]:

					if ((a[i] + a[j] + a[k]) % 10 == 3) {
						flag = 1;
						break;
					}
				}

				if (flag == 1) {
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}



		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

		t = t - 1;
	}
}













