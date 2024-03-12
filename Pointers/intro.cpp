#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* p=&x;
    cout<<x<<endl;
    *p = 40;
    cout<<x;
    
    
}