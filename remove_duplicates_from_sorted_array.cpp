#include <bits/stdc++.h>
using namespace std;
int remove_duplicate(int A[], int N)
{
    //Your code here
    //sorted array to check duplicates, check the adjacent elements
    int res = 1; // Number of unique elements or Total size of array without dups
    for (int i = 1; i < N; i++)
    {
        if (A[i] != A[res - 1])
        {
            A[res] = A[i];
            res++;
        }
    }
    return res;
}

int remDups(int a[], int n)
{
    int temp[n];
    temp[0] = a[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != a[i])
        {
            temp[res] = a[i];
            res++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
    return res;
}
int main(int argc, char *argv[])
{
    int N;
    N = atoi(argv[1]);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = atoi(argv[i + 2]);
    }
    int n = remove_duplicate(a, N);
    cout << n;
    return 0;
}
