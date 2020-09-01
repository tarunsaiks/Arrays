#include <iostream>
using namespace std;
void seives(int n)
{
    bool a[n + 1];
    int i, j;
    for (i = 0; i <= n; i++)
    {
        a[i] = true;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (a[i] == true)
        {
            for (j = i * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] == true)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n = 75;
    seives(n);
    return 0;
}
