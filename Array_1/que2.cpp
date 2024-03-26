//count the number of elements in a given array greater than the given number x;
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int X;
cout<<"Enter the no: "<<endl;
cin>>X;
int num =0;

for(int j=0; j<n; j++){
    if(arr[j]>X){
        num++;
    } 
}
cout<<num;

}