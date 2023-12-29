
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int i=1;i<=n;i++)
     {
          int j;
          for(j=1;j<=n-i;j++)
          {
               cout<<" ";
          }
          int k=i;
          for(;j<=n;j++)
          {
cout<<k++;
          }
k=i;
for(;j<=n+i-1;j++)
{
     cout<<k++;
}
cout<<'\n';
     }
}