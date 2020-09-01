#include <iostream>
using namespace std;
void sieves(int n)
{
	int a[n + 1], i, j;
	for (i = 0; i <= n; i++)
	{
		a[i] = 1;
	}
	for (i = 2; i * i <= n; i++)
	{
		if (a[i] == 1)
		{
			for (j = i * i; j <= n; j += i)
			{
				a[j] = 0;
			}
		}
	}
	for (i = 2; i < n; i++)
		if (a[i] == 1)
			cout << i << " ";
}
int main()
{
	sieves(100);
	return 0;
}
