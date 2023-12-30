//print the factorial of first n numbers

#include<iostream>
#include<cmath>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;
}

void factorial(int n){
    for(int i=1;i<=n; i++){
        cout<<fact(i);
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    factorial(n);
}


//**Another Way**//
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {    int f =1;
        for(int j=2; j<=i; j++){
            f*=j;
        }
        cout<<f;
        cout<<endl;
    }
}