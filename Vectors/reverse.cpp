#include<iostream>
using namespace std;

void reverse(int arr[],int n){
 int i=0;
 int j= n-1;

 while(i<=j){
    int temp= arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
 }
}

void display(int arr[],int n){
for(int i=0; i<n; i++){
    cout<<arr[i];
}
cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    
    display(arr,n);
    reverse(arr,n);
    display(arr,n);


 

}