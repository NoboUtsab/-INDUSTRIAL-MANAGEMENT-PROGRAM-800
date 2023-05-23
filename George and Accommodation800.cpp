#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    int count=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if(q>=2 && abs(p-q)>=2)
        {
            count++;
        }
    }
    cout<<count;
}
