// sort the arrays of 0 and 1;
//overwritting
//time complexity : 2n
#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int>v;

v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(0);

//count the 0 
    int zero=0;
 for(int j=0; j<v.size(); j++){
     if(v.at(j)==0){
       zero++;
     }
 }

for(int i=0; i<v.size(); i++){
    if(i<zero){
        v[i] = 0;
    }
     else{
        v[i] = 1;
     }   
}


}
