#include<bits/stdc++.h>
using namespace std;
int main()
{
     
int number=3;
int x=1;
int y=10;
int count=1;
int z;
cout<<"*"<<"\n";
for(int row=1;row<=number;row++)
{
cout<<"*";
     for(int j=row-1;j>=-(row-1);j--)
     {
          
         cout<<" "<<row-abs(j)<<" ";

     } 
     cout<<"*";
     cout<<'\n';
}
for(int row=number-1;row>=1;row--)
{

cout<<"*";
     for(int j=row-1;j>=-(row-1);j--)
     {
          
         cout<<" "<<row-abs(j)<<" ";

     } 
     cout<<"*";
     cout<<'\n';
}
cout<<"*"<<'\n';

return 0;
}