//pattern
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 11*12*13*14*15
// 11*12*13*14*15
// 7*8*9*10
// 4*5*6
// 2*3
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=5;
int x=1;
int y=10;
int count=1;
int z;
for(int i=1;i<=t;i++)
{
if(i==t)
         {
           z=x;
         }
     for(int j=1;j<=i;j++)
     {
          if(j!=i)
          cout<<x<<"*";
         else {
             
              cout<<x;
         }
         
x++;
     } 
  
     cout<<'\n';
}
for(int i=t;i>=1;i--)
{
     // int z=y-(-1);
     // y=z;


     for(int j=1;j<=i;j++)
     {
          if(j!=i)
          cout<<z<<"*";
         
         else {
              cout<<z;
         }
z++;
     }
   
    z=z-i+1;;
    z=z-i;
   
    
     cout<<'\n';
}

return 0;
}