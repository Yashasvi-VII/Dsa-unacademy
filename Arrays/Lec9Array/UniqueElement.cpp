//author:yashasvi_7
//date:2,Aug,2022
// SwapAlternate 1 2 3 4 5 6 --> 2 1 4 3 6 5
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;

int unique2(int a[],int size){
set<int>s;
int ans=-1;
for(int i=0;i<size;i++)
{
     if(!s.count(a[i]))
     {
     s.insert(a[i]);
     } else {
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

cout<<"Unique element in array is :-"<<'\n';
cout<<unique2(a,size)<<'\n';

}