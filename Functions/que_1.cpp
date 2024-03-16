//Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;


void print (int n){
    for(int i=1; i<=n; i++){
        cout<<i*i;
        cout<<endl;
    }
}

int main(){
int n;
cin>>n;
print(n);
}