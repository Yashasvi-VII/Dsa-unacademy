//author:yashasvi_7
//date:1Aug,2022
// Min and Max in a Array 
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;


int FindMin(int a[],int size){

int min=INT_MAX;
for(int i=0;i<size;i++)
{
     if(a[i]<min)
     {
          min=a[i];
     }
}
     return min;
}

// Max of array
int FindMax(int a[],int size){

int max=INT_MIN;
for(int i=0;i<size;i++)
{
     if(a[i]>max)
     {
          max=a[i];
     }
}
   return max;
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

// min element in arrays
cout<<"Min element in Array is: "<<' ';
cout<<FindMin(a,size)<<'\n';

// max element in array
cout<<"Max element in Array is:"<<' ';
cout<<FindMax(a,size)<<'\n';

}