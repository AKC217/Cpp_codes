//rotate the given array a by k steps,where k is non negative.
//note: k can be greater than n as well as where n is the size of the array 'a';

#include<iostream>
using namespace std;

void reverse(int arr[], int n, int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;

    }

}
void rotate(int arr[],int n,int k){
  for(int i=0; i<k; i++){
    reverse(arr,n,0,n-2);
    reverse(arr,n,0,n-1);
  }
}

void display( int arr[], int n){
 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
}


int main(){
   int n;
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
   cin>>arr[i];
   }
    
   display(arr,n);
   int k;
   cin>>k;
   rotate(arr,n,k);
   display(arr,n);



}