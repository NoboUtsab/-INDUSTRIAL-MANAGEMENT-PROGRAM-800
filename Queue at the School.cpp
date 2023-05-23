#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    char c[s];
    for(int i=0; i<s; i++)
    {
        cin>>c[i];
    }
    while(n--)
    {
      for(int i=0;i<s;)
      {
          if(c[i]=='B' && c[i+1]=='G')
          {
              swap(c[i],c[i+1]);
              i=i+2;
          }
          else
          {
              i+=1;
          }
      }
    }
     for(int i=0;i<s;i++)
     {
         cout<<c[i];
     }

}
