#include <iostream>
using namespace std;

int firstOccu(int a[], int n, int x)
{

	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (x > a[mid])
		{
			low = mid + 1;
		}
		else if (x < a[mid])
		{
			high = mid - 1;
		}
		else
		{
			if (mid == 0 || a[mid] != a[mid - 1])
			{
				return mid;
			}
			else
				high = mid - 1;
		}
	}
	return -1; // if not found
}

int lastOccu(int a[], int n, int x)
{

	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (x > a[mid])
		{
			low = mid + 1;
		}
		else if (x < a[mid])
		{
			high = mid - 1;
		}
		else
		{
			if (mid == n - 1 || a[mid] != a[mid + 1])
			{
				return mid;
			}
			else
				low = mid + 1;
		}
	}
	return -1; // if not found
}
int CountOccurences(int a[], int n, int x)
{
	int first = firstOccu(a, n, x);
	if (first == 0)
		return 0;
	return (lastOccu(a, n, x) - first) + 1;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 5, 6, 6, 6, 7, 8, 8, 8, 8, 8, 8, 9};
	int size = sizeof(a) / sizeof(int);
	cout << CountOccurences(a, size, 8);
	return 0;
}
