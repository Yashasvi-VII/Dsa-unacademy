// pattern 
//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1 
 #include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=5;
     for(int row=0;row<n;row++)
     {
               int num=1;

          for(int j=1;j<=n-row;j++)
          {
               cout<<" ";
          }
          for(int j=0;j<=row;j++)
          {
               cout<<num<<" ";
               num=num*(row-j)/(j+1);
          }
          cout<<'\n';
     }
}