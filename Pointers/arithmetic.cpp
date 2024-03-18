#include<iostream>
using namespace std;
int main()
{
    // int a;
    // int *p=&a;
    // cout<<p<<endl;
    // p=p+1;
    // cout<<p;

    // 0xebcd5ff8a4
    // 0xebcd5ff8a8  //4 bits added

// bool lab =true;
// bool *p=&lab;
// cout<<p<<endl;
// p =p+1;
// cout<<p;

// 0xfffedffb67
// 0xfffedffb68   //1 bit is added 

int a=5; 
int *ptr=&a;
cout<<*ptr<<endl;
ptr=ptr+1;
cout<<*ptr;
}