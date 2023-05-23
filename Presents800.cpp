
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
 int j=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=j;
        c[i]=0;
        j++;
    }
     for(int i=0;i<n;i++)
     {
         c[a[i]-1]=c[a[i]-1]+b[i];

     }
      for(int i=0;i<n;i++)
     {
        cout<<c[i]<<" ";

     }



}
