#include<iostream>
using  namespace std;
int  n;
int a[20001];
int freq[200001] {0};

int arrayPairSum() {

	int minimum = -1e4;
	int maximum = 1e4;

	//Build the Freq array.
	for (int i = 0; i < n; i = i + 1) {
		int element = a[i];
		int shifted_Index = element - minimum;
		freq[shifted_Index] = freq[shifted_Index] + 1;
	}


	//Total Contribution of Every Element:
	int ans = 0;

	int residue = 0;//Kya previous element ki  frequency odd thi?

	//Iterate over the frequency Array and Calculate individual
	//element contribution.

	for (int i = minimum; i <= maximum; i = i + 1) {

		int element = i;
		int shifted_element = i - minimum;

		if (freq[shifted_element] > 0) {

			//Now I want the contribution of element i
			//whose frequency is stored at the index
			//named as original_element in  freq array.

			freq[shifted_element] = freq[shifted_element] - residue;

			//ceil of freq[original_element]/2;
			ans = ans + (((freq[shifted_element] + 2 - 1) / 2) * i);

			residue = freq[shifted_element] % 2;
		}
	}

	return ans;

}


int main() {

	cin >> n;
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	cout << arrayPairSum() << endl;
}


















