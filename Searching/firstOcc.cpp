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

// Recursive Approach
int recFirstOccu(int a[], int l, int h, int x)
{
	int mid = (l + h) / 2;
	if (x > a[mid])
	{
		return recFirstOccu(a, mid + 1, h, x);
	}
	else if (x < a[mid])
	{
		return recFirstOccu(a, l, mid - 1, x);
	}
	else
	{
		if (mid == 0 || a[mid] != a[mid - 1])
		{
			return mid;
		}
		return recFirstOccu(a, l, mid - 1, x);
	}
	return -1;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 5, 6, 6, 6, 7, 8, 8, 8, 8, 8, 8, 9};
	int size = sizeof(a) / sizeof(int);
	cout << recFirstOccu(a, 0, size - 1, 8);
	return 0;
}
