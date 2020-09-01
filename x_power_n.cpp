#include <iostream>
#include <math.h>
using namespace std;
long long int bruteforce(int a, int n)
{
	long long int prod = 1;
	for (int i = 0; i < n; i++)
	{
		prod = prod * a;
	}
	return prod;
}
int optimal(int a, int n)
{
	if (n == 0)
		return 1;
	double retValue = 1;
	while (n)
	{
		if (n % 2)
			retValue = retValue * a;
		a = a * a;
		n = n / 2;
	}
	return retValue;
}
int main()
{
	//compute a^n;
	long long int a, n;
	a = 5;
	n = 10;
	cout << bruteforce(a, n) << endl; // takes 1.225 seconds
	cout << optimal(a, n) << endl;	  // 1.217 seconds
	return 0;
}
