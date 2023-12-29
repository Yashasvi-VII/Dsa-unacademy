// pattern
//           * 
//          * * 
//         * * * 
//        * * * * 
//       * * * * * 
//      * * * * * * 
//     * * * * * * * 
//    * * * * * * * * 
//   * * * * * * * * * 
//  * * * * * * * * * * 
// * * * * * * * * * * * 
// * * * * * * * * * * * 
//  * * * * * * * * * * 
//   * * * * * * * * * 
//    * * * * * * * * 
//     * * * * * * * 
//      * * * * * * 
//       * * * * * 
//        * * * * 
//         * * * 
//          * * 
//           * 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=11;
for(int row=1;row<=n;row++)
{
     
     for(int collumn=1;collumn<=n-row;collumn++)
     {
          cout<<" ";
     }
     for(int collumn=1;collumn<=row;collumn++)
     {
          cout<<"* ";
     }
     
     cout<<'\n';
}
for(int row=1;row<=n;row++)
{
    
     for(int collumn=1;collumn<=row-1;collumn++)
     {
          cout<<" ";
     }
    
       for(int collumn=1;collumn<=n-row+1;collumn++)
     {
          cout<<"* ";
     }
     cout<<'\n';
}
}