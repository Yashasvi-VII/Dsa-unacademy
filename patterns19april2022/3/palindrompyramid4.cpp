// pattern
// 1 
// 1 2 1 
// 1 2 3 2 1 
// 1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
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
// for(int j=1;j<=t-row;j++)
// {
//      cout<<" ";
// }
     for(int j=row-1;j>=-(row-1);j--)
     {
         cout<<row-abs(j)<<" ";

     } 


    
     cout<<'\n';
}

return 0;
}