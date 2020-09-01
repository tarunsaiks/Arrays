#include <iostream>
using namespace std;
void fullstar()
{
	int i, j, rows, k = 0;
	//   printf("Enter the number of rows: ");
	//   scanf("%d", &rows);
	rows = 3;
	for (i = 1; i <= rows; ++i, k = 0)
	{
		// ith loop to traverse along the rows
		for (j = 1; j <= rows - i; ++j) // number of spaces follows rows-i pattern
		{
			cout << "  ";
		}
		// while (k != 2 * i - 1)
		// {
		// 	cout << "* ";
		// 	++k;
		// }
		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
}
int main()
{
	fullstar();
	return 0;
}
