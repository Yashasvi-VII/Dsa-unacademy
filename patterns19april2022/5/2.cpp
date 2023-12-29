// pattern
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=4;
int x=1;
int y;
int count=1;
for(int i=1;i<=t;i++)
{if(i==t)
{y=x;}

     for(int j=1;j<=i;j++)
     {
          if(j!=i)
          cout<<x<<"*";
         else {
              cout<<x;
         }

     } 
     x++;
     count++;
     cout<<'\n';
}
for(int i=t;i>=1;i--)
{

     for(int j=1;j<=i;j++)
     {
         if(j!=i)
          cout<<t<<"*";
         else {
              cout<<t;
         }
     }
    t--;
     cout<<'\n';
}
return 0;
}