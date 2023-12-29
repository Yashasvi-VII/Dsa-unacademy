#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int row=n;row>=1;row--)
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
     
                     cout<<row<<" ";
               for(int j=1;j<=row-1;j++)
               {
                    cout<<" ";
                    
               }
         cout<<5;
               cout<<'\n';
          }
         
     }
     cout<<'\n';
     
     return 0;
}