// pattern 
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21    
// 22 23 24 25 26 27 28 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=7;
     int k=1;
     for(int i=1;i<=n;i++)
     {
          

          for(int j=1;j<=i;j++ )
          {
               cout<<k<<" ";
               k++;
          }
          cout<<'\n';
     
     }

     return 0;
}