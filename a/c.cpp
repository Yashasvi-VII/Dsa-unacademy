#include<bits/stdc++.h>
using namespace std;
int main()
{
     // palindromne is string "abcba";
     string s1;
     cin>>s1;
     string ans="";
   
     int n=s1.length();
       int i=n;
     while(i>=0)
     {
          int temp=s1[i];
          ans+=temp;
          i--;
     }
     cout<<ans<<'\n';
     return 0;

}


