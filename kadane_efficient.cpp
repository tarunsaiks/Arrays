#include <bits/stdc++.h>
using namespace std;

int kadane_efficent(int a[], int n)
{
    int result = a[0];
    int maxEnding;
    maxEnding = a[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + a[i], a[i]);
        result = max(maxEnding, result);
    }
    return result;
}

int main()
{
    int a[] = {-5, 1, -2, 3, -1, 2, -2};
    int n = sizeof(a) / sizeof(n);

    int b[] = {-3, 8, -2, 4, -5, 6};
    int n1 = 6;

    cout << kadane_efficent(b, n1);
    return 0;
}