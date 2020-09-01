#include <iostream>
using namespace std;
unsigned int CountSetBits(int n)
{
	// Using Brian-Kernighan Method
	// n & (n-1) always unsets the rightmost bit
	// Number of times the loop runs will be count of set bits
	unsigned int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 15;
	cout << CountSetBits(n);
	return 0;
}
