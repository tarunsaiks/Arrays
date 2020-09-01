#include <iostream>
using namespace std;
void binary(int A[], int n)
{
	if (n < 1)
	{
		cout << A << endl;
	}
	else
	{
		A[n - 1] = 0;
		binary(A, n - 1);
		A[n - 1] = 1;
		binary(A, n - 1);
	}
}
int main()
{
	int n;
	cin >> n;
	int A[n];
	binary(A, n);
	return 0;
}
