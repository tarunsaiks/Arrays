#include <bits/stdc++.h>
using namespace std;

int *mergeTwo(int a[], int b[], int n, int m)
{
	// int j = 0;
	// map<int, bool>mp;
	// for(int i=0;i<n;i++)
	// 	mp[a[i]] = true;
	// for(int i = 0; i< m; i++)
	// 	mp[b[i]] = true;
	// for(auto k:mp)
	// 	result[j++] = k.first;
	// return result;
	int result[n + m];
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n && j < m)
	{
		if (a[i] < a[j])
			result[k++] = a[i++];
		else
			result[k++] = b[j++];
	}
	while (i < n)
	{
		result[k++] = a[i++];
	}
	while (j < m)
	{
		result[k++] = b[j++];
	}
	return result;
}
int main()
{
	int a[] = {1, 3, 5, 7};
	int b[] = {2, 4, 6, 8};
	int n = 4, m = 4;
	int *p = mergeTwo(a, b, n, m);
	int resSize = sizeof(p) / sizeof(p[0]);
	for (int i = 0; i < resSize; i++)
	{
		cout << p[i] << " ";
	}
	return 0;
}
