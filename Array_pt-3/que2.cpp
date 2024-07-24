//move all negative no to the begining and positive to the end with constant extra space
#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
  
  int arr[8] ={1,-2,4,6,-2,-4,5,7};
  display(arr,8);

  int i=0;
  int j=7;
  
  while(i<j){

    if(arr[i]>0 && arr[j]<0){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    if(arr[i]<0){
        i++;
    }

    if(arr[j]>0){
        j--;
    }

  }

  display(arr,8);


}