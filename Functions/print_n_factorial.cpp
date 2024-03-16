//In this code basiaclly we have to print factorial up to n numbers;
#include<iostream>
#include<cmath>
using namespace std;

// int fact(int x){
// int fact=1;
// for(int i=2; i<=x; i++){
//     fact *=i;
// }
// return fact;
// }

// void factorial(int n){
//     for(int i=1; i<=n; i++){
//         cout<<fact(i);
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     factorial(n);

// }

///another way
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int fact =1;
//         for(int j=1; j<=i; j++){
//             fact*=j;
            
//         }
//         cout<<fact;
//         cout<<endl;
//     }
// }

//yet another way:)
int main(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        cout<<fact<<endl;
        fact*= (i+1);
    }
}
