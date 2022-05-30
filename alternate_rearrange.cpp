// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1#
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        // Your code here
        int k = n / 2;
        stack<int> max, min;
        for (int i = k - 1; i >= 0; i--)
        {
            min.push(arr[i]);
        }
        for (int i = k; i < n; i++)
        {
            max.push(arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = max.top();
                max.pop();
            }
            else
            {
                arr[i] = min.top();
                min.pop();
            }
        }
    }
};

int main()
{
    int t;

    // testcases
    cin >> t;

    while (t--)
    {

        // size of array
        int n;
        cin >> n;

        long long arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        // calling rearrange() function
        ob.rearrange(arr, n);

        // printing the elements
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}