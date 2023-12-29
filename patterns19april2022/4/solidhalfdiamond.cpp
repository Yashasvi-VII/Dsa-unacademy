// pattern
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=10;
for(int i=1;i<=t;i++)
{
     for(int j=1;j<=i;j++)
     {
          cout<<"*";
     }
     cout<<'\n';
}
for(int i=t;i>=1;i--)
{
     for(int j=1;j<=i;j++)
     {
          cout<<"*";
     }
     cout<<'\n';
}
return 0;
}