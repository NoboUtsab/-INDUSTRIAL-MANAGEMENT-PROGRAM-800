#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
       int m=0,e=0,o=0,w=0,i=0,fl=0;
       if(s[i]=='m' || s[i]=='M')
       {
           while(s[i]=='m' || s[i]=='M' && i<n)
           {
               m=1;
               i++;
           }
       }
       else
       {
           fl=1;
       }

        if(s[i]=='e' || s[i]=='E')
       {
           while(s[i]=='e' || s[i]=='E' && i<n)
           {
               e=1;
               i++;
           }
       }
       else
       {
           fl=1;
       }

        if(s[i]=='o' || s[i]=='O')
       {
           while(s[i]=='o' || s[i]=='O' && i<n)
           {
               o=1;
               i++;
           }
       }
       else
       {
           fl=1;
       }

        if(s[i]=='w' || s[i]=='W')
       {
           while(s[i]=='w' || s[i]=='W' && i<n)
           {
               w=1;
               i++;
           }
       }
       else
       {
           fl=1;
       }

       if(m=1 && e==1 && o==1 && w==1 &&i==n&& fl==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       }
    }

