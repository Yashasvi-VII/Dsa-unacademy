//author:yashasvi_7
//date:2,Aug,2022
// Triplet sum
// Lecture 9 Babbar Youtube :- Intro to Array

#include<bits/stdc++.h>
using namespace std;

bool solve(int a1[],int sum,int size){
    

return false;
 

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

cout<<"Enter the Target Value"<<'\n';
cin>>sum;

cout<<"Triplet sum is:-"<<'\n';
cout<<solve(a1,sum,size)<<'\n';

}