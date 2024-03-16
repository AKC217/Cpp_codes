//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
#include<cmath>
using namespace std;

void print (int a,int b){

    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    
for(int i=a+1; i<b; i++){
    if(i%2 != 0){
        cout<<i;
        cout<<endl;
    }
}
}

int main(){
int a,b;
cin>>a>>b;
print(a,b);

}