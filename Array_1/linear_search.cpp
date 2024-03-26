#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

int x;
cout<<"Enter the no you want to find: "<<endl;
cin>>x;

bool flag = false;
for(int j=0; j<n; j++){
    if(arr[j]==x){
        cout<<"Yes its there";
        flag =true;
        break;
        
    }
}
if(flag == false){
    cout<<"Not found";
}
}