//find the last occurence of x in the array
#include<iostream>
#include<vector>
using namespace std;

//more efficient

void find(vector<int>v, int x){
    int f;
    for(int i=v.size()-1; i>=0; i--){
       if(v[i]==x){
        f=i;
        break;
       }
    }
    cout<<f;

}

// void find(vector<int>&v, int x){
//     int f;
//     for(int i=0; i<v.size(); i++){
//        if(v[i]==x){
//         f=i;
//        }
//     }
//     cout<<f;
// }

int main(){
    vector<int>v;
    
    for(int i=0; i<5; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int x; 
    cout<<"Enter the no you want to find: ";
    cin>>x;

    find(v,x);
    // for(int j=0; j<5; j++){
    //     cout<<v.at(j)<<" ";
    // }


}


