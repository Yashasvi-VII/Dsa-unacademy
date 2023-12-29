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
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          * 
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
     if(row==1)
    {
        
              cout<<"* ";
         
      
    }
    if(row==n)continue;
     else if (row>1){
         cout<<"*";
         for(int j=1;j<=2*row-3;j++)
         {
              cout<<" ";
         }
         cout<<"*";

    }
    
     cout<<'\n';
}for(int row=n;row>=1;row--)
{
    
    
   
        for(int collumn=1;collumn<=n-row;collumn++)
     {
          cout<<" ";
     }
     if(row==1)
    {
              cout<<"* ";
         
      
    }
    if(row==n)continue;
     else if (row>1){
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