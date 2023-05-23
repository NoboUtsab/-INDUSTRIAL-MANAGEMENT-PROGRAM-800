#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    vector<int>v;
    cin>>k>>l>>m>>n>>d;
    for(int i=k;i<=d;i+=k)
    {
        v.push_back(i);
    }
     for(int i=l;i<=d;i+=l)
    {
        v.push_back(i);
    }
     for(int i=m;i<=d;i+=m)
    {
        v.push_back(i);
    }
    for(int i=n;i<=d;i+=n)
    {
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

   cout<<v.size()<<endl;

}
