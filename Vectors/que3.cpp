//Write a program to copy the conetents of an array into another in the reverse order

#include<iostream>
using namespace std;

void reverse(int arr[], int brr[], int n){
    for(int i=0; i<n; i++){
        brr[i] = arr[n-1-i];
    }

}
int main(){
    int n;
    cin>>n;  
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }

    cout<<endl;
    int brr[n];
    reverse(arr,brr,n);

    for(int k=0; k<n; k++){
        cout<<brr[k]<<" ";
    }



}