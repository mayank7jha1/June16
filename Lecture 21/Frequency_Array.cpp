#include<iostream>
#include<cstring>
using  namespace std;

int main() {

	char ch[1001];
	cin >> ch;

	int n = strlen(ch);

	int freq[256] {0};

	//Iterate over the input  array and update the freq array.

	for (int i = 0; i < n; i = i + 1) {
		char current_char = ch[i];
		freq[current_char] = freq[current_char] + 1;
	}

	//Iterate over the frequenc  array and print it out.
	for (int i = 0; i < 256; i = i + 1) {

		if (freq[i] > 0) {
			char ch1 = i;
			cout << ch1 << " " << freq[i] << endl;
		}
	}


}