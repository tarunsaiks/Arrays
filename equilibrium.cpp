#include <iostream>
using namespace std;
bool isEq(int a[], int n)
{
	int total_sum = 0;
	for (int i = 0; i < n; i++)
	{
		total_sum += a[i];
	}
	int lsum = 0;
	for (int i = 0; i < n; i++)
	{
		if (lsum == (total_sum - a[i]))
			return true;
		lsum += a[i];
		total_sum -= a[i];
	}
	return false;
}
int main()
{
	int a[] = {3, 4, 8, -9, 20, 6};
	int n = 6;
	cout << isEq(a, 6);
	return 0;
}
