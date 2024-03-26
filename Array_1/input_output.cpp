#include<iostream>
using namespace std;

int main() {

int n;
cin>>n;
int array[n];
// taking input
    for(int i=0; i<n; i++){
       cin>>array[i];
    }
//printing output
for(int j=0; j<n; j++){
    cout<<array[j]<<"  ";

}

}