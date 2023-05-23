
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
 int a=max(l1,l2);
 int b=min(r1,r2);
    if(a<=b)
    {
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
