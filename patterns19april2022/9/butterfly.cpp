//pattern
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int row=1;row<=n;row++)
     {

 for(int j=1;j<=row;j++)
{
     cout<<"*";
}
int l=2*n-2*row;
for(int j=1;j<=l;j++)
{
     cout<<" ";
}
for(int j=1;j<=row;j++)
{
     cout<<"*";
}
        cout<<'\n';
     }


       for(int row=n;row>=1;row--)
     {

 for(int j=1;j<=row;j++)
{
     cout<<"*";
}
int l=2*n-2*row;
for(int j=1;j<=l;j++)
{
     cout<<" ";
}
for(int j=1;j<=row;j++)
{
     cout<<"*";
}
        cout<<'\n';
     }
    
   
     return 0;
}