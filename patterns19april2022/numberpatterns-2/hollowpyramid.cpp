#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int row=1;row<=n;row++)
     {
          
          for(int j=1;j<=n-row;j++)
          {
               cout<<" ";
          }
          if(row==1 || row==n)
          {
          for(int i=1;i<=row;i++)
          {
               cout<<i<<" ";
          }

          }
          else {
               cout<<1;
                for(int j=1;j<=2*row-3;j++)
         {
              cout<<" ";
         }
               cout<<row;

          }
          cout<<'\n';
     }
}