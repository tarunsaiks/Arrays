#include <iostream>
using namespace std;
int RecursiveBinarySearch(int a[], int l, int h, int x)
{
	int low = l;
	int high = h - 1;
	int mid = (low + high) / 2;
	if (a[mid] == x)
		return mid;
	else if (x > a[mid])
	{
		return RecursiveBinarySearch(a, mid + 1, high, x);
	}
	else
		return RecursiveBinarySearch(a, low, mid - 1, x);
}
int IterativeBinarySearch(int a[], int n, int x)
{
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		else if (x > a[mid])
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	return -1; // if not found
}
int main()
{
	int a[] = {10, 10, 10, 20, 20, 30, 40, 40, 50};
	int size = sizeof(a) / sizeof(int);
	// cout << size;
	cout << IterativeBinarySearch(a, size, 40);
	return 0;
}
