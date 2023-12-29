// ***********
// *         *
// *        *
// *       *
// *      *
// *     *
// *    *
// *   *
// *  *
// * *
// *


#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int n=11;
for(int row=1;row<=n;row++)
{
    
    if(row==1||row==n)
    {
         for(int i=1;i<=n-row+1;i++)
         {
              cout<<"*";
         }
      
    }
    else{
         cout<<"* ";
         for(int j=1;j<=n-row-1;j++)
         {
              cout<<" ";
         }
         cout<<"*";

    }
    
     cout<<'\n';
}
return 0;
}