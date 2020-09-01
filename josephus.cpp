#include <iostream>
using namespace std;
int josh(int n, int k)
{
	if (n == 0)
	{
		// When n is 0, then he should kill himself now matter what
		return 0;
	}
	else
	{
		//1. K is added so that values from josh(n-1,k) matches with the remaining living numbers order
		//2. % operation is done, coz sometimes values exceeds n
		return (josh(n - 1, k) + k) % n;

		// Generalized
		//if kth element (0,n) is to be killed, k-1 th element will be killed
		//then from k, counting begins from 0 till it reaches k-1
		//0-----> k
		//1-----> k+1
		//2-----> k+2
		//so k is added everytime it restarts counting
	}
}
int main()
{
	int x = josh(10, 4);
	cout << "The only survivor is :" << x;
	return 0;
}
