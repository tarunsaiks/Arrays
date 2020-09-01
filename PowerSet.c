// Not working
// must check how to generate power set using bitwise operators
#include <stdio.h>
#include <math.h>
void PowerSet(char *str, int n)
{

	int powsize = pow(2, n);
	for (int counter = 0; counter < powsize; counter++)
	{
		for (int j = 0; j < n; j++)
		{
			if (counter & (1 << j))
			{
				printf("%s", str[j]);
			}
		}
		printf("\n");
	}
}
int main()
{
	char str[] = "abc";
	int n = sizeof(str) - 1;
	PowerSet(str, n);
	return 0;
}
