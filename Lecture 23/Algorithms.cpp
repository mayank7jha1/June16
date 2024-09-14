#include<iostream>
#include<algorithm>
using  namespace std;

int main() {

	int n = 7;
	int a[] {4, 3, 1, 3, 1, 6, 7};

	//sort(Address of the first block,Address of the last block+1);

	//[First  Block,Last Block+1);

	//Sort this Array.
	sort(a, a + n);//It does not Return anything

	//Reverse this Array.
	reverse(a, a + n);//It does not Return anything

	//Swap Two Values:
	swap(a[2], a[5]);//It does not Return anything

	//Maximum of Two:
	int maxi = max(a[2], a[5]); //It returns the maximum value

	//Minimum of Two:
	int mini = min(a[2], a[5]); //It returns the minimum value


}









