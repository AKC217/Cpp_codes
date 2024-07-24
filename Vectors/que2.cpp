//find the doublet in the array whose sum is equal to the given value of x; --leetcode

#include<iostream>
using namespace std;


void find(int arr[], int x){

for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
        if(arr[i]+arr[j]==x){
            cout<<i<<","<<j<<endl;
        }
    }
}


}



int main(){

int arr[7]={1,2,4,5,0,8,3};

/** 0,2
    2,0
    3,4
    4,3  
**/
int x;
cout<<"Enter the no:";
cin>>x;

find(arr,x);



}
