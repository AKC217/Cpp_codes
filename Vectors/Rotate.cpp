//rotate the given array a by k steps,where k is non negative.
//note: k can be greater than n as well as where n is the size of the array 'a';

#include<iostream>
using namespace std;

//reverse
void reverse(int arr[],int n,int i,int j){

 while(i<=j){
    int temp= arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
 }
}

//rotate
void rotate(int arr[],int n,int k){

for(int l=0; l<k; l++){
    reverse(arr,n,0,n-2);
    reverse(arr,n,0,n-1);
}

}

//display
void display(int arr[],int n){
for(int i=0; i<n; i++){
    cout<<arr[i];
}
cout<<endl;
}


int main(){

int arr[6] ={1,2,3,4,5,6};
display(arr,6);
int k;
cout<<"How many times do you want to rotate array: ";
cin>>k;
cout<<endl;
rotate(arr,6,k);
display(arr,6);


}










