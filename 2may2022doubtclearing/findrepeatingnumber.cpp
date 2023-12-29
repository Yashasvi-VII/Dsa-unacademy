#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
     // using hashmap
    unordered_map<int,int>m;
     for(int i=0;i<n;i++)
     {
          m[a[i]]++;
     } 
     int ans;
     for(int i=0;i<n;i++)
     {
          if(m[a[i]]>1)
          {
               ans=a[i];
          }
     }
     return ans;
}
int main()
{
     int n=7;

     int a[1000];
     
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     cout<<solve(a,n);
}