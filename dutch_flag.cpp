#include <iostream>
using namespace std;
int main() {
	//code
    int t;
	cin>>t;
	while(t--)
	{
	    int i;
	    long int n;
	    int count0=0;
	    int count1=0;
	    int count2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	       // if(a[i]!=0||a[i]!=1||a[i]!=2) cout<<-1<<endl;
	    }
	    i=0;
	    while(count0>0)
	    {
	        a[i++]=0;
	        count0--;
	    }
	    while(count1>0)
	    {
	        a[i++]=1;
	        count1--;
	    }
	    while(count2>0)
	    {
	        a[i++]=2;
	        count2--;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<"";
	    }
	}
	return 0;
}