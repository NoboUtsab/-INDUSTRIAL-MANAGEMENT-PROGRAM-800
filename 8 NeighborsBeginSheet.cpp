#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,M,x,y,i,j,l,r;
    cin>>N>>M;
    char a[100][100];
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x>>y;
    bool f=true;
     int dx[]={-1,1,0,0,-1,-1,1,1};
    int dy[]={0,0,-1,1,-1,1,-1,1};
    for(i=0;i<8;i++)
    {
        l=x+dx[i];
        r=y+dy[i];
        if(l>=1 && l<=N && r>=1 && r<=M && a[l][r]!='x')
            f=false;
    }



    if(f==true)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }



}
