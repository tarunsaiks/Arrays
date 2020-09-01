#include <iostream>
using namespace std;
long int power(long int n, unsigned int y)
{
	if (y == 0)
		return 1;
	if (y % 2 == 0)
	{
		return power(n, y / 2) * power(n, y / 2);
	}
	return n * power(n, y / 2) * power(n, y / 2);
}
long int order(long int n)
{
	long int ord = 0;
	while (n != 0)
	{
		++ord;
		n = n / 10;
	}
	return ord;
}
bool armstrong(long int n)
{
	long int ord = order(n);
	long int temp = n;
	long int sum = 0;
	while (temp)
	{
		int r = temp % 10;
		sum += power(r, ord);
		temp = temp / 10;
	}
	return (sum == n);
}
int main()
{
	int n = 153;
	cout << armstrong(n) << endl;
	return 0;
}
