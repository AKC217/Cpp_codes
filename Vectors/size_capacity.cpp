#include<iostream>
#include<vector>

using namespace std;
int main(){
     vector<int>vec;
     vec.push_back(2);
      cout<<vec.size()<<endl;
     

    //  cout<<sizeof(vec);  // dont use this 
  
     vec.push_back(4);
     vec.push_back(4);
     vec.push_back(4);
     vec.push_back(4);
     vec.push_back(4);
       cout<<vec.size()<<endl;
       cout<<vec.capacity();
cout<<sizeof(vec); // always 24




}