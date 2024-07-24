#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(0);

    v.at(3) = 4;


    for(int j=0; j<5; j++){
        cout<<v.at(j);

    }
    cout<<endl;

}