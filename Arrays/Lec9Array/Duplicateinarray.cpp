//author:yashasvi_7
//date:2,Aug,2022
// Duplicate in Array
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[],int size){
     int vis[10000];

int ans=0;
for(int i=0;i<size;i++)
{
     if (!vis[a[i]])
     {
          vis[a[i]]=1;
          //.push_back(1);
     }
     else {
          ans=a[i];
     }
}
return ans;
}

int main()
{
     // Enter the Size of Array
     cout<<"Enter the size of Array"<<'\n';
int size;
cin>>size;
//Declaring the Array 
int a[10000];

cout<<"Enter the elements of array"<<'\n';
for(int i=0;i<size;i++)
{
     cin>>a[i];
}

cout<<"Duplicate element in array is :-"<<'\n';
cout<<duplicate(a,size)<<'\n';

}