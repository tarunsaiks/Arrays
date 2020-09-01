#include <iostream>
#include "a.h"
using namespace std;
int maxCircularSum(int a[], int n)
{
	int min = min_sum(a, n);
	int totalSum = 0;
	for (int i = 0; i < n; i++)
	{
		totalSum += a[i];
	}
	return totalSum - min;
}
int main()
{
	int a[] = {-3, 4, 5, 6, -8, 7};
	int n = 6;
	cout << maxCircularSum(a, n);
	return 0;
}
