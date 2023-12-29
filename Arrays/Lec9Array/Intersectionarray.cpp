//author:yashasvi_7
//date:2,Aug,2022
// Intersection of two array 1 2 3 4 , 2 5 6 8 o/p - 2
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;

int Intersection(int a1[],int a2[],int size){
 int ans=0;

set<int>s;
for(int i=0;i<size;i++)
{
     s.insert(a1[i]);
}

for(int i=0;i<size;i++)
{
     if(s.find(a2[i])!=s.end())
     {
 ans=a2[i];
     }
     else {
         continue;
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
int a1[10000];
int a2[10000];

cout<<"Enter the elements of array1"<<'\n';
for(int i=0;i<size;i++)
{
     cin>>a1[i];
}
cout<<"Enter the elements of array2"<<'\n';
for(int i=0;i<size;i++)
{
     cin>>a2[i];
}


cout<<"Intersection element of two array is :-"<<'\n';
cout<<Intersection(a1,a2,size)<<'\n';

}