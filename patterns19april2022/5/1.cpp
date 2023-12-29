// pattern
// 3
// 44
// 555
// 6666
// 555
// 44
// 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=4;
int x=t-1;
int y;
for(int i=1;i<=t;i++)
{if(i==t)
{y=x;}

     for(int j=1;j<=i;j++)
     {
          cout<<x;
     }
     x++;
     cout<<'\n';
}
for(int i=t-1;i>=1;i--)
{ --y;

     for(int j=1;j<=i;j++)
     {
          cout<<y;
     }
    
     cout<<'\n';
}
return 0;
}