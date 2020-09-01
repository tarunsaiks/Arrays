#include <iostream>
using namespace std;
int tripping(int a[], int n)
{
	int res = 0;
	int lmax[n], rmax[n];
	lmax[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		// compute left side's max element for each element
		// in the array a[], so that left side holding
		// capacity is known
		lmax[i] = max(a[i], lmax[i - 1]);
	}

	rmax[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		// compute right side's max element for each element
		// in the array a[], so that right side holding
		// capacity is known
		rmax[i] = max(a[i], rmax[i + 1]);
	}

	for (int i = 0; i < n; i++)
	{
		// min amount of water will be stored between
		// left and right boxes as barrier
		// but if a[i] has some height
		// amount of water trapped will be decreased
		res = res + (min(lmax[i], rmax[i]) - a[i]);
	}
	return res;
}
int main()
{
	int a[] = {5, 0, 6, 2, 3};
	int n = sizeof(a) / sizeof(a[0]);
	cout << tripping(a, n);
	return 0;
}
