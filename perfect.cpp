// if sum of its factors is equal to number (excluding number itself)
// 6 factors = 1,2,3, (Sum = 1+2+3 = 6)
#include <iostream>
using namespace std;
bool isPerfect(int n)
{
	int sum = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i * i != n)
			{
				sum += i + n / i; // it is important to add n/i to the sum as n divides i
			}
			else
				sum += i;
		}
	}
	cout << sum << endl;
	if (sum == n && n != 1)
		return true;
	else
		return false;
}
int main()
{
	int n = 6;
	if (isPerfect(n))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
