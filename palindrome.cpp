#include <iostream>
using namespace std;
int reverse(int n)
{
	int rev = 0;
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return rev;
}
int main()
{
	int n = 1001;
	int r = reverse(n);
	if (r == n)
		cout << "Palindrome\n";
	else
		cout << "Not a Palindrome\n";
	cout << r;
	return 0;
}
