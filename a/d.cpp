#include<bits/stdc++.h>
using namespace std;
int main()
{
     // palindromne is string "abcba";
    
     int a1[10];
     int a2[10];
     for(int i=0;i<5;i++)
     {
          cin>>a1[i];
     }
     for(int i=0;i<5;i++)
     {
          cin>>a2[i];
     }
     // TC O(N^2) // SC O(1)

     // TC O(N) Sc(O (n+M)) //10^5 ~ 10^10

    // TC O(N +O(N) -O(2N) ~ O(N) SC O(N)

 set<int>s;
 for(int i=0;i<5;i++)
 {
      s.insert(a1[i]);

 }
bool flag=false;
int ans=0;

 for(int i=0;i<5;i++)
 {
      if(s.find(a2[i])!=s.end())
      {
           flag=true;
           ans=a1[i];
      }
 }

if(flag==true)
{
cout<<"element found "<<" "<<ans<<'\n';
}
else {
     cout<<" no comman element found"<<"\n";
     }
     return 0;

}
