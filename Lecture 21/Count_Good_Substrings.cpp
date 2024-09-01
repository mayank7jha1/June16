#include<iostream>
using  namespace std;
char ch[100001];

void Count() {

	long long Prev_Odd_Index_a = 0;
	long long Prev_Even_Index_a = 0;

	long long Prev_Even_Index_b = 0;
	long long Prev_Odd_Index_b = 0;

	long long Even_Substring_Count = 0;
	long long Odd_Substring_Count = 0;

	int n = strlen(ch);

	for (int i = 0; i < n; i = i + 1) {

		Odd_Substring_Count = Odd_Substring_Count + 1;

		if (i % 2 == 0) {
			//Even  Index
			char character = ch[i];

			if (character == 'a') {

				Odd_Substring_Count = Odd_Substring_Count + Prev_Even_Index_a;
				Even_Substring_Count = Even_Substring_Count + Prev_Odd_Index_a;

				Prev_Even_Index_a = Prev_Even_Index_a + 1;
			} else {

				//Current character='b';

				Odd_Substring_Count = Odd_Substring_Count + Prev_Even_Index_b;
				Even_Substring_Count = Even_Substring_Count + Prev_Odd_Index_b;

				Prev_Even_Index_b = Prev_Even_Index_b + 1;
			}

		} else {

			//Odd Index
			char character = ch[i];
			if (character == 'a') {

				Odd_Substring_Count = Odd_Substring_Count + Prev_Odd_Index_a;
				Even_Substring_Count = Even_Substring_Count + Prev_Even_Index_a;

				Prev_Odd_Index_a = Prev_Odd_Index_a + 1;

			} else {

				//Current character='b';

				Odd_Substring_Count = Odd_Substring_Count + Prev_Odd_Index_b;
				Even_Substring_Count = Even_Substring_Count + Prev_Even_Index_b;

				Prev_Odd_Index_b = Prev_Odd_Index_b + 1;
			}

		}
	}

	cout << Even_Substring_Count << " " << Odd_Substring_Count << endl;


}


int main() {
	cin >> ch;
	Count();
}