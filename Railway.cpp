#include <bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr + n);
	sort(dep, dep + n);
	int plat_needed = 1, result = 1;
	int i = 1, j = 0;
	while (i < n && j < n) {
		if (arr[i] <= dep[j]) {
			plat_needed++;
			i++;
		}
		else if (arr[i] > dep[j]) {
			plat_needed--;
			j++;
		}
		if (plat_needed > result)
			result = plat_needed;
	}

	return result;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	int dep[n];
	for (int i=0;i<n;i++) {
		int a, b;
		cin>>a>>b;
		arr[i]=a;
		dep[i]=a+b;
	}
	cout<<findPlatform(arr, dep, n)<<endl;


	return 0;
}
