#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[5]={14,99,7,887,2992};
     int ans=0;
     for(int i=1;i<5;i++)
     {
if(a[i]>a[i-1])
{
     ans=a[i];
}
     }
     cout<<ans<<'\n';
//TC O(N)
// SC O(1)
return 0;


}
// *
// **
// *** 