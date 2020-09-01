#include <iostream>
using namespace std;
int maxConsecOnes(int a[], int n)
{
	int result = 0;
	int current = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			current = 0;
		else
		{
			current++;
			if (result < current)
				result = current;
		}
	}
	return result;
}
int main()
{
	int a[] = {1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0};
	int n = sizeof(a) / sizeof(n);
	cout << maxConsecOnes(a, n);
}
