#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    getline(cin,s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            p.push_back(s[i]);
        }
    }
    sort(p.begin(),p.end());
    p.erase(unique(p.begin(),p.end()),p.end());
    cout<<p.size()<<endl;

}
