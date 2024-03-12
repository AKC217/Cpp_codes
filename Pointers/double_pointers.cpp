#include<iostream>
using namespace std;

int main()
{
    int a;
    int *ptr=&a;  //pointrt
    int **p=&ptr;  ///double pointer


    int ***q =&p;      // triple pointer 
    cout<<q<<endl;     //p address
    cout<<*q<<endl;    //ptr adress
    cout<<**q<<endl;   //a adress
    cout<<***q<<endl;  //5


// cout<<a<<endl;         //5

// cout<<&a<<endl;        //0x3114bff704
// cout<<ptr<<endl;       //0x3114bff704 
// cout<<*ptr<<endl;      //5

// cout<<&ptr<<endl;      //0x3114bff6f8
// cout<<p<<endl;         //0x3114bff6f8

// cout<<*p<<endl;        //0x3114bff704
// cout<<**p<<endl;       //5


cout<<a<<endl;           //5
cout<<*ptr<<endl;        //5
cout<<**p<<endl;         //5
cout<<***q<<endl;        //5


}