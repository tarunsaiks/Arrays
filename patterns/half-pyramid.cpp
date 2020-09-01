#include <iostream>
using namespace std;
void halfstar()
{
	int i, j, rows;
	// cin >> rows;
	rows = 10;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void halfnum()
{
	int i, j, rows;
	// cin >> rows;
	rows = 10;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}
void halfalpha()
{
	// cin >> rows;
	char alpha = 'A';
	char input = 'F';
	for (int i = 1; i <= (input - 'A' + 1); i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << alpha << " ";
		}
		++alpha;
		cout << endl;
	}
}
int main()
{
	halfstar();
	halfnum();
	halfalpha();
	return 0;
}
