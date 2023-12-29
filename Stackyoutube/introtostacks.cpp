// created on: JUNE,06,2022
// Author : yashasvi_7
// Topic : Stack 

#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 // creation of stack 
  stack<int> s;

  // insert element in stack
  s.push(8);
s.push(909);
s.push(73);
s.push(4567);

  // remove element top from stack
     s.pop();

     // printing stack top element
     while(!s.empty()){
cout<<"top element in stack is "<<s.top()<<" stack size is: "<<s.size() <<'\n';
s.pop();
     }

     
     return 0;
}