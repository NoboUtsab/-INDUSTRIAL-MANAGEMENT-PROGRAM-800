#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,m;
    cin>>n;

    while(n!=0)
    {
        if(n>=100)
        {
            m=n/100;
            n=n%100;

            count=count+m;

        }
        else if(n>=20 && n<100 )
        {
            m=n/20;
            n=n%20;

            count=count+m;

        }
        else if(n>=10 && n<20 )
        {
            m=n/10;
            n=n%10;

            count=count+m;

        }
        else if(n>=5 && n<10 )
        {
            m=n/5;
            n=n%5;

            count=count+m;

        }
        else if(n>=1 && n<5 )
        {
            m=n/1;
            n=n%1;

            count=count+m;

        }
    }

    cout<<count;
}




