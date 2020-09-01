#include <iostream>
using namespace std;
int min_sum(int a[], int n)
{
	//modified kadane's algorithm to
	// find min sum subarray
	// can be used to find maximum of circular sum subarray
	int minEnding = a[0];
	int res = a[0];
	for (int i = 0; i < n; i++)
	{
		// for each element, check the min
		// by adding ele or by checking the minEnding
		minEnding = min(minEnding + a[i], a[i]);
		res = min(res, minEnding);
	}
	return res;
}
int main()
{
	int a[] = {8, -4, 3, -5, 4};
	int n = 5;
	cout << min_sum(a, n);
	return 0;
}
