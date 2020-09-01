#include <bits/stdc++.h>
using namespace std;
vector<int> SubArrayWithSum(int arr[], int n, int s)
{
	int last = 0;
	int start = 0;
	unsigned long long currsum = 0;
	bool flag = false;
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		// sum upto current element in the array
		currsum += arr[i];

		// check if current sum is greater than or equal to s
		if (currsum >= s)
		{
			// take a pointer at i, named last
			last = i;

			// start from start till last
			// do the excluding part while s < currsum
			while (s < currsum && start < last)
			{
				// subtract the element from left, i.e, arr[start]
				currsum -= arr[start];
				++start;
			}

			// now, if current sum is equal to s
			// then print the start and end index for the subarray
			if (currsum == s)
			{

				res.push_back(start + 1);
				res.push_back(last + 1);

				// flag is set to true to check that subarray exists
				flag = true;
				break;
			}
		}
	}

	// if no subarray found, print -1
	if (flag == false)
		res.push_back(-1);

	return res;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int s;
	cin >> s;
	vector<int> result;
	result = SubArrayWithSum(a, n, s);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}
