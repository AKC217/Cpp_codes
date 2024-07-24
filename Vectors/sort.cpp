#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vex;

    vex.push_back(3);
    vex.push_back(4);
    vex.push_back(9);
    vex.push_back(6);
    vex.push_back(0);

    for(int j=0; j<5; j++){
        cout<<vex.at(j);

    }
    cout<<endl;
  sort(vex.begin(), vex.end());

      for(int k=0; k<5; k++){
        cout<<vex.at(k);
    }
}