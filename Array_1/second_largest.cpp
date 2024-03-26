#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 int arr[n];

 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
int max= arr[0];
for(int j=1; j<n; j++){
    if(max<arr[j]){
        max =arr[j];
    }   
}
int secMax= arr[0];
for(int k=1; k<n; k++)
{
    if(secMax<arr[k] && arr[k] != max){
        secMax= arr[k];
    }
}
cout<<secMax;

}