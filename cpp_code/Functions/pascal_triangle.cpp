#include<iostream>
#include<cmath>
using namespace std;

///optimised pascaltriangle code
int main()
{
    int n;
    cin>>n;
 
for(int i=0; i<=n-1; i++){
       //spaces
    for(int k=0; k<=(n-i-1); k++){
        cout<<" ";
    }
//main triangle
     int current=1;
 for(int j=0; j<=i; j++){
   cout<<current;
   cout<<" ";
   current= current*(i-j)/(j+1);
    
 }
 cout<<endl;
}

}











/*****my way*****/

// //fun-factorial
// int fact(int x){
//     int fact=1;
//     for(int i=2; i<=x; i++){
//         fact *=i;
//     }
//     return fact;
// }

// //fun-combination 
// int comb(int n, int r){
//     int comb= fact(n)/(fact(r)*fact(n-r));
//     return comb;
// }
// //fun-traiangle
// void triangle(int x)
// {
// for(int i=0; i<=x-1; i++){
//     for(int k=0; k<=(x-i-1); k++){
//         cout<<" ";
//     }
//  for(int j=0; j<=i; j++){
//     cout<<comb(i,j);
//     cout<<" ";
//  }
//  cout<<endl;
// }

// }

// int main(){
//     int n;
//     cin>>n;

// triangle(n);

// return 0;

// }