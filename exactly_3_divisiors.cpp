// { Driver Code Starts
//Initial Template for C++
#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
bool isPrime(int n)
{
    if(n<=1) return false;
    if(n<=3) return true;
    if(n==4) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)) return false;
    }
    return true;
}
int exactly3Divisors(int N)
{
    //Your code here
    //sqrt(N) should be prime
    int count = 0;
    if(N <= 3){
        return 0;
    }
    for(int i = 2; i*i <= N; i++ ){
        if(isPrime(i)){
        count++;
        }
    }
    return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends