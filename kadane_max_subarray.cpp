// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include <iostream>
using namespace std;
int kadane(int a[], int n)
{
	// T(n) 			= O(n)
	// Auxilary space 	= O(n)
	// However maxEnding can be reduced to only one variable
	int result;
	int maxEnding[n];
	maxEnding[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		maxEnding[i] = max(maxEnding[i - 1] + a[i], a[i]);
		if (maxEnding[i] > maxEnding[i - 1])
		{
			result = maxEnding[i];
		}
	}
	return result;
}

int kadane_efficent(int a[], int n)
{
	int result = a[0];
	int maxEnding;
	maxEnding = a[0];
	for (int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + a[i], a[i]);
		result = max(maxEnding, result);
	}
	return result;
}

// Stack-Overflow Version
int maxSumSub(int a[], int n)
{
	int maxEnding = 0;
	int maxSoFar = 0;
	int start = 0;
	int end = 0;
	for (int i = 0; i < n; i++)
	{
		maxEnding += a[i];
		if (maxEnding < 0)
		{
			maxEnding = 0;
			start = i + 1;
		}
		else
			end = i;

		if (maxSoFar < maxEnding)
		{
			maxSoFar = maxEnding;
		}
	}
	cout << start << " " << end << endl;
	return maxSoFar;
}

int main()
{
	int a[] = {-5, 1, -2, 3, -1, 2, -2};
	int n = sizeof(a) / sizeof(n);

	int b[] = {-3, 8, -2, 4, -5, 6};
	int n1 = 6;

	// cout << kadane(a, n) << endl;
	cout << kadane_efficent(b, n1);
	// cout << maxSumSub(a, n);
	return 0;
}
