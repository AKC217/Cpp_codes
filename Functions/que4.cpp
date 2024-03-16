//Write a function to count the number of digits in a number and then print the square of this number
#include<iostream>
#include<cmath>
using namespace std;

void print(int n){
    int j=0;
    int i=n;

while(i>0){
    i/=10;
    j++;
}

cout<<j<<endl<<j*j;

}

int main(){

int n;
cin>>n;
print(n);

}