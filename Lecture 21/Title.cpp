#include<iostream>
using  namespace std;
int k;
char ch[101];
int freq[27] {0};


void Title() {

	//First Iteration:
	/*
		We want to fill all the incomplete blank pair with
		their respective values also maintaining the freq array.
	*/

	int i = 0;
	int n = strlen(ch);
	int j = n - 1;

	while (i < j) {

		if (ch[i] == '?' and ch[j] == '?') {
			i = i + 1;
			j = j - 1;
			continue;

		} else if (ch[i] != '?' and ch[j] == '?') {

			ch[j] = ch[i];
			int current_char = ch[i];
			freq[current_char - 'a' + 1] = freq[current_char - 'a' + 1] + 1;

		} else if (ch[i] == '?' and ch[j] != '?') {

			ch[i] = ch[j];
			int current_char = ch[i];
			freq[current_char - 'a' + 1] = freq[current_char - 'a' + 1] + 1;

		} else if (ch[i] == ch[j]) {

			int current_char = ch[i];
			freq[current_char - 'a' + 1] = freq[current_char - 'a' + 1] + 1;

		} else {

			cout << "IMPOSSIBLE" << endl;
			return;
		}

		i = i + 1;
		j = j - 1;
	}


	//Take Care of the Middle Character:
	if (i == j and ch[i] != '?') {
		int current_char = ch[i];
		freq[current_char - 'a' + 1] = freq[current_char - 'a' + 1] + 1;
	}



	//Second Iteration:

	/*
		Since I want Lexographicall Smallest Answer: I want
		to put the largesst character at the inner most
		? mark possible with the unused character with respect to
		k.
	*/

	while (i >= 0 and j < n) {

		//I  want to find the largest unused character with
		//respect to k.

		while (k > 1 and freq[k] > 0) {
			k = k - 1;
		}

		//The Largest Unsed character is now k.

		if (ch[i] == '?' and ch[j] == '?') {
			char luc = k + 'a' - 1;
			ch[i] = ch[j] = luc;
			freq[luc - 'a' + 1] = freq[luc - 'a' + 1] + 1;

		}

		i = i - 1;
		j = j + 1;
	}

	if (k == 1 and freq[k] > 0) {
		cout << ch << endl;

	} else {

		cout << "IMPOSSIBLE" << endl;
	}
}


int main() {

	cin >> k;
	cin >> ch;
	Title();
}