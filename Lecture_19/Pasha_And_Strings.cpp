#include<iostream>
#include<cstring>
using  namespace std;
char ch[200001];

void Smart_Reverse(int start, int end) {
	int i = start, j = end;
	while (i <= j) {
		swap(ch[i], ch[j]);
		i = i + 1;
		j = j - 1;
	}
}

int main() {
	cin >> ch;
	int len = strlen(ch);
	int m;
	cin >> m;

	while (m > 0) {
		int start;
		cin >> start;
		start = start - 1;
		int end = len - start - 1;
		Smart_Reverse(start, end);

		m = m - 1;
	}

	cout << ch << endl;
}






