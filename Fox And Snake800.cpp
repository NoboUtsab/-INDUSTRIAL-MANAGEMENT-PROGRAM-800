#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,count=0;
    cin>>m>>n;
    char a[m][n];
    for(int i=1; i<=m; i++)
    {
        if(i%2==0)
        {
            count++;
        }
        for(int j=1; j<=n; j++)
        {

            if(i%2==0 && count%2!=0)
            {
                if(j==n)
                {
                    a[i][j]='#';
                }
                else
                {
                    a[i][j]='.';
                }
            }
            else if(i%2==0 && count%2==0 )
            {
                if(j==1)
                {
                    a[i][j]='#';
                }
                else
                {
                    a[i][j]='.';
                }
            }
            else
            {
                a[i][j]='#';
            }
            cout<<a[i][j];
        }

        cout<<endl;

    }

}
