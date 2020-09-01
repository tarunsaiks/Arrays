#include <iostream>
using namespace std;
// If we subtract smaller number from larger (we reduce larger number)
// GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a == b)
		return a;
	if (a > b)
	{
		cout << "gcd(" << a - b << ", " << b << " )\n";
		return gcd(a - b, b);
	}
	cout << "gcd(" << a << ", " << b - a << " )\n";
	return gcd(a, b - a);
}
int main()
{
	int a = 98;
	int b = 53;
	cout << gcd(a, b);
	return 0;
}
