//pattern 
// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int t=5;
int n=8;
int x=1;
int y;
int count=1;
for(int row=1;row<=t;row++)
{
     // for traingle
// for(int j=1;j<=t-row;j++)
// {
//      cout<<" ";
// }
int x=65;
     for(int j=1;j<=row;j++)
     {
          
          cout<<char(x)<<" ";
         //cout<<char(x+65);
x++;
     } 
     x--;
     for(int j=1;j<row;j++)
     {
            x--;
          cout<<char(x)<<" ";
   
     }


    
     cout<<'\n';
}

return 0;
}