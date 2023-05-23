#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    string s;
    map<string,int>m;
    cin>>t;
    m["Tetrahedron"]=4;
     m["Cube"]=6;
      m["Octahedron"]=8;
       m["Dodecahedron"]=12;
        m["Icosahedron"]=20;
   for(int i=1;i<=t;i++)
   {
       cin>>s;
       c+=m[s];
   }
    cout<<c<<endl;

}
