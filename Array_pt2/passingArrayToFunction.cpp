#include<iostream>
using namespace std;

void fun(int n, int a[]){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
for(int j=0; j<n; j++){
        cout<<a[j];
    }
}

int main(){
int n;
int arr[n];
fun(n,arr);

}