#include <iostream>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(a[0]);
	int pos = 3;
	for (int i = pos; i < pos + n; i++)
	{
		cout << a[i % n] << " ";
	}
	return 0;
}
