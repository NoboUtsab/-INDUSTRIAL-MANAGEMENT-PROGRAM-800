#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ma=0,mi=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
     int min=a[0];
    for(int i=1;i<n;i++)
    {
      if(max<a[i])
      {
          max=a[i];
         ma=i;
      }
            if(min>=a[i])
      {
          min=a[i];
          mi=i;
      }
    }


    if(mi<ma)
        {
        cout<<ma+(n-1-mi)-1<<endl;

    }
    else
    cout<<ma+(n-1-mi)<<endl;

}
