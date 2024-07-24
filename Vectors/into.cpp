#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(4);

    vec[0] =1; /// use[] for updating accesing and printing
    cout<<vec[0];

sort(vec.begin(), vec.end());

}