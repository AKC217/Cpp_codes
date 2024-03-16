#include<iostream>
#include<cmath>
using namespace std;

int hcf(int a,int b){
    int hcf=1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf=i;

        }
    }
return hcf;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<hcf(a,b);
}



// **another way**//
// #include<iostream>
// #include<cmath>
// using namespace std;

// int hcf(int a,int b){
//     int hcf=1;
//     for(int i=min(a,b); i>=1; i--){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//             break;
//             }
//     }
// return hcf;
// }

// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<hcf(a,b);
// }
