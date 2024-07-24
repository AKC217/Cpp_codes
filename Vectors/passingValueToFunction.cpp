#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>&c){
    c.at(0) = 20;
}

int main(){

vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
change(v);

for(int j=0; j<v.size(); j++){
    cout<<v.at(j)<<" ";
}

}
