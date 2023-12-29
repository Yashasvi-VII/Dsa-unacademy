//author:yashasvi_7
//date:1Aug,2022
// Lecture 9 Babbar Youtube :- Intro to Array
// Reverse Array

#include<bits/stdc++.h>
using namespace std;


// Max of array
void Reverse(int a[],int size){
     int start,end;
     start=0;
     end=size-1;

     while(start<=end)
     {
          swap(a[start],a[end]);
    start++;
    end--;

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

cout<<"Original Array:-"<<' ';
for(int i=0;i<size;i++)
{
     cout<<a[i]<<" ";
}

cout<<'\n';

Reverse(a,size);

// Reverse Array
cout<<"Array After Reverse is :-";
for(int i=0;i<size;i++)
{
     cout<<a[i]<<" ";
}

return 0;

}