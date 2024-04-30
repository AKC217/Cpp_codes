#include<iostream>
using namespace std;

void fun(int arr[]){

 arr[0] = 5;
 arr[4] = 3;

}


int main(){
    int arr[5] = {2,4,5,6,7};
    fun(arr);


   for(int i=0; i<5; i++){
        cout<<arr[i];
    }

}