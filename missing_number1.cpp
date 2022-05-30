// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int total_sum = 0;
        for (int i = 1; i <= n; i++)
        {
            total_sum += i;
        }
        int curSum = 0;
        int arrSize = array.size();
        for (int i = 0; i < arrSize; i++)
        {
            curSum += array[i];
        }
        return (total_sum - curSum);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}