#include<iostream>
using namespace std;
int main(){
    int x[5];    
    x[3] = 22;
    cout<<&x<<endl;
     cout<<&x[0]<<endl;       
     cout<<&x[1]<<endl;
     cout<<&x[2]<<endl;
     cout<<&x[3]<<endl;
     cout<<&x[4]<<endl;  
}