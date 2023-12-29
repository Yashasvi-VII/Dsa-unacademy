// pattern
// 1 
// 1  2
// 1   3
// 1    4
// 1 2 3 4 5 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int row=1;row<=n;row++)
     {
          if(row==1||row==n)
          {
                for(int j=1;j<=row;j++)
          {
          cout<<j<<" ";
          }
          cout<<'\n';
          }
          else {
               cout<<1<<" ";
               for(int j=1;j<=row-1;j++)
               {
                    cout<<" ";
                    
               }
               cout<<row;
               cout<<'\n';
          }
         
     }
     cout<<'\n';
     
     return 0;
}