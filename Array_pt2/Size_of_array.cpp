#include<iostream>
using namespace std;

void fun(int arr[], int size){
cout<<size;

}



int main()
{
int arr[5] ={1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
fun(arr,size);
}