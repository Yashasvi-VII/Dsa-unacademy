// pattern
//          * 
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// * * * * * * * * * * 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int n=10;
for(int row=1;row<=n;row++)
{
    
    
   
        for(int collumn=1;collumn<=n-row;collumn++)
     {
          cout<<" ";
     }
     if(row==1||row==n)
    {
         for(int i=1;i<=row;i++)
         {
              cout<<"* ";
         }
      
    }
     else{
         cout<<"*";
         for(int j=1;j<=2*row-3;j++)
         {
              cout<<" ";
         }
         cout<<"*";

    }
    
     cout<<'\n';
}
return 0;
}