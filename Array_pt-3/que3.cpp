//sort the arrays of 0's and 1's and 2's; ---leetcode 75
//2 0 2 1 1 0
//1 2 0 1 0 1

#include<iostream>
#include<vector>
using namespace std;


int main(){

  vector<int>v{};
int n;
cin>>n;

for(int k=0; k<n; k++){
    int x;
    cin>>x;
    v.push_back(x);
}


for(int k=0; k<v.size(); k++){
    cout<<v.at(k)<<" ";}
    cout<<endl;

int i=0;
int m= 0;
int j=v.size()-1;

while(m<=j){

    //swap with i
  if(v[m]== 0){
    int temp= v[i];
    v[i] = v[m];
    v[m] = temp;
    i++;
    m++;
    
  }
//swap with j
  else if(v[m]==2){
      int temp= v[j];
    v[j] = v[m];
    v[m] = temp;
    j--;
  }

  else{
    m++;
  }

}

for(int k=0; k<v.size(); k++){
    cout<<v.at(k)<<" ";
}
cout<<endl;

}