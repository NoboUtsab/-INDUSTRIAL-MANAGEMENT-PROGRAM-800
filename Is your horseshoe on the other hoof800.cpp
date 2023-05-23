 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int s1,s2,s3,s4,j=0,count=0;
     vector<int>v;
     vector<int>a;

     cin>>s1>>s2>>s3>>s4;
     v.push_back(s1);
      v.push_back(s2);
       v.push_back(s3);
        v.push_back(s4);

        sort(v.begin(),v.end());

         a=v;
         a.erase(unique(a.begin(),a.end()),a.end());



     cout<<v.size()-a.size()<<endl;
 }
