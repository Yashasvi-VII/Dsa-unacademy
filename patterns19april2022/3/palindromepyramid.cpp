//pattern
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=5;
int n=8;
int x=1;
int y;
int count=1;
for(int i=1;i<=t;i++)
{if(i==t)
{y=x;}
for(int j=1;j<=n-i+1;j++)
{
     cout<<"*";
}
     for(int j=1;j<=i;j++)
     {
          if(j!=i)
          cout<<x<<"*";
         else {
              cout<<x;
         }

     } 
     for(int j=1;j<=n-i+1;j++)
{
     cout<<"*";
}

     x++;
     count++;
     cout<<'\n';
}

return 0;
}