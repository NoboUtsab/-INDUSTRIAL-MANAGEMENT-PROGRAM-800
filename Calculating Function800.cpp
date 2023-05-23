
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    {
        if(n%2==0)
        {
           cout<<n/2;
        }
        else
        {
           n=(-1)*(n/2)-1;
           cout<<n;
        }
    }
}
