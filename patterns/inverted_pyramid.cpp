#include <iostream>
using namespace std;
void invstar()
{
	int i, j, rows;
	rows = 5;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j >= i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void invnum()
{
	int i, j, rows;
	rows = 5;
	for (int i = rows; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) // if j>=i for each i j reaches INT_MAX and continuously loops around
		{
			cout << j << " ";
		}
		cout << endl;
	}
}
void invchar()
{
	int i, j;
	char input = 'F';
	char alpha = 'A';
	for (int i = 1; i <= (input - 'A' + 1); i++)
	{
		for (int j = (input - 'A' + 1); j >= i; j--)
		{
			cout << alpha << " ";
		}
		alpha++;
		cout << endl;
	}
}
int main()
{
	// invstar();
	// invnum();
	invchar();
	return 0;
}
