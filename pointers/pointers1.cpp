#include<bits/stdc++.h>
using namespace std;

int func (int *p){
     p=p+1;
}

// void  dummy(int arr[],int n)
// {
//      cout<<sizeof(arr)<<'\n';
// }

// void dummy (int *arr,int n){
//      cout<<arr<<'\n';
//      cout<<&arr<<'\n';
//      cout<<*arr<<'\n';//
//      cout<<sizeof(*arr)<<'\n'; // 4 because pointer is pointing to int so 4 byte if we take long int then
//      // output will be 8 
//      cout<<sizeof(arr)<<'\n';// size of pointer is 8 byte which is os dependent i.e 64 bit os is 8 and 32 is 4
// }

int main(){

// int a=5;
// int *p=&a;

// cout<<a<<'\n';
// cout<<*p<<'\n';
// cout<<&p<<'\n';
// cout<<&a<<'\n';
// cout<<p<<'\n';
// cout<<*p<<'\n';
// //cout<<*a<<'\n'; error because a is not of pointer type 

// cout<<"Before P "<<p<<'\n';
// cout<<*p<<'\n';

// func(p);
// cout<<"After p"<<p<<'\n';
// cout<<*p<<'\n';


int arr[5]={1,2,3,4,5};
//  cout<<&arr<<'\n';
// cout<<*arr<<'\n';
// cout<<*arr+1<<'\n';
// cout<<*arr+2<<'\n';
// cout<<*arr+3<<'\n';
// cout<<*arr+4<<'\n';

// int i=0;
// cout<<i[arr]<<'\n';

//dummy(arr,5);

// int *ptr=arr;
// cout<<*arr<<'\n';

// char ch[5]="abcd";
// char *ptr2=ch;
// cout<<ptr2<<'\n';
// cout<<*ptr2<<'\n';

// char charc= 'a'; 
// char *ptr3=&charc;
// cout<<ptr3<<'\n';
// cout<<*ptr3<<'\n';


// GUESS THE OUTPUT 
//1 
// int *p1;
// cout<<"1)"<<p1<<'\n';
// cout<<"2)"<<*p1<<'\n';
// cout<<"3)"<<&p1<<'\n';

//3
// int *p2=0;
// cout<<"4)"<<p2<<'\n';
// cout<<"5)"<<*p2<<'\n';
// cout<<"6)"<<&p2<<'\n';
  
// if(cout<<"hello")
// {
//      cout<<"from if";
// }
// else{
//      cout<<"from else";
// }


char sentence[]="My name is yashasvi";
char *p=sentence;

cout<<p<<'\n';
cout<<*p<<'\n';
cout<<&p<<'\n';
cout<<&sentence<<'\n';

return 0;

}