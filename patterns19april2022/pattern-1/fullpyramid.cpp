//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int n=11;
for(int row=1;row<=n;row++)
{
     
     for(int collumn=1;collumn<=n-row;collumn++)
     {
          cout<<"_";
     }
     for(int collumn=1;collumn<=row;collumn++)
     {
          cout<<"* ";
     }
     
     cout<<'\n';
}
return 0;
}
