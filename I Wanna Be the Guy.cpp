 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,p,q,posq=0;
     int count=0;
     cin>>n;
     cin>>p;
     int a[250];
     for(int i=0;i<p;i++)
     {
         cin>>a[i];

     }
     cin>>q;

     for(int i=p;i<p+q;i++)
     {
         cin>>a[i];
     }
     sort(a,a+(p+q));
      for(int i=0;i<p+q;i++)
     {
        if(a[i]!=a[i+1])
        {
            count++;
        }
     }

     if(n==count)
     {
         cout<<"I become the guy."<<endl;

     }

     else
     {
         cout<< "Oh, my keyboard!"<<endl;
     }
 }
