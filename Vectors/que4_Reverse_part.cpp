#include<iostream>
using namespace std;

void reverse(int arr[],int n,int i,int j){

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
    int n,i,j;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    cin>>i>>j;
    
    display(arr,n);
    reverse(arr,n,i,j);
    display(arr,n);


 

}