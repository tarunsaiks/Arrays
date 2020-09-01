#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int gift=1;
        int min_gift=1;
        for (int i=0;i<n-1;i++)
        {
            if (arr[i+1]>arr[i])
            {
                gift++;
                min_gift+=gift;
            }
            else
            {
                if (gift>1)
                {
                    gift--;
                    min_gift+=gift;
                }
                else
                {
                    min_gift+=gift;
                }
            }
            //    cout<<arr[i+1]<<"gift "<<gift<<"\n";
        }
        cout<<min_gift<<"\n";
    }
    return 0;
}
