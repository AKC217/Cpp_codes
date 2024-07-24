#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&v,vector<int>&brr){
for(int i=0; i<v.size(); i++){
    int j= v.at(v.size()-1-i);
    brr.push_back(j);
}

}

int main(){
    vector<int>v;
int n;
cin>>n;
int x;
for(int i=0; i<n; i++){
   cin>>x;
   v.push_back(x);
}
for(int j=0; j<n; j++){
   cout<<v.at(j)<<" ";
}
cout<<endl;
vector<int>brr;
reverse(v,brr);

for(int k=0; k<n; k++){
   cout<<brr.at(k)<<" ";
}


}