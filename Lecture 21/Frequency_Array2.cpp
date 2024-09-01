#include<iostream>
using  namespace std;

int main() {
	char ch[1001];
	cin >> ch;

	int n = strlen(ch);

	int freq[26] {0};

	//Iterate over the input  array and update the freq array.

	for (int i = 0; i < n; i = i + 1) {
		char current_char = ch[i];

		// freq[current_char - 97] = freq[current_char - 97] + 1;
		freq[current_char - 'a'] = freq[current_char - 'a'] + 1;
	}

	//Iterate over the frequenc  array and print it out.
	for (int i = 0; i < 26; i = i + 1) {

		if (freq[i] > 0) {
			// char ch1 = i + 97;
			char ch1 = i + 'a';
			cout << ch1 << " " << freq[i] << endl;
		}
	}
}

