//author:yashasvi_7
//date:2,Aug,2022
// SwapAlternate 1 2 3 4 5 6 --> 2 1 4 3 6 5
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;


void Swap(int a[],int size){
int l=0;
int r=1;
while(l<=size-2&&r<=size-1)
{
     swap(a[l],a[r]);
     l+=2;
     r+=2;
}
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

cout<<"Before swap array became"<<'\n';
for(int i=0;i<size;i++)
{
     cout<<a[i]<<" ";
}
cout<<'\n';
Swap(a,size);
cout<<"After swap array became"<<'\n';
for(int i=0;i<size;i++)
{
     cout<<a[i]<<" ";
}


}