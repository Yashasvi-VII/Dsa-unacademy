//author:yashasvi_7
//date:2,Aug,2022
// Sort 012 using dutch national flag algo 
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int size){
    int low=0,mid=0,high=size-1;

    while(mid<=high)
    {
     if(a[mid]==0)
     {
swap(a[mid++],a[low++]);
     }
      else if(a[mid]==1)
     {
      swap(a[mid++],a[high--]);

     }
     else  if(a[mid]==2)
     {
      swap(a[mid],a[high--]); 
     }
    }

}

int main()
{
     // Enter the Size of Array
     cout<<"Enter the size of Array"<<'\n';
int size;
cin>>size;
//Declaring the Array 
int a1[10000];
int a2[10000];

cout<<"Enter the elements of array1"<<'\n';
for(int i=0;i<size;i++)
{
     cin>>a1[i];
}
int sum;



solve(a1,size);

cout<<"Sorted Array is : - "<<'\n';
for(int i=0;i<size;i++)
{
     cout<<a1[i]<<' ';
}


}