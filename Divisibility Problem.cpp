#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int m=(a/b)+1;
            int d=m*b-a;
       cout<<d<<endl;
        }


    }
}
