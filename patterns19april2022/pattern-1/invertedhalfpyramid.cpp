// patter - *****
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int n=5;
for(int row=1;row<=n;row++)
{
     for(int collumn=1;collumn<=n-row+1;collumn++)
     {
          cout<<"*";
     }
     cout<<'\n';
}
return 0;
}
