#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(5); // delcare + initialize
    cout<<v[2]<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;

    vector<int>vec(6,55); // vector has 6 capacity and 6 elements and all the elements are 55;
    cout<<vec[1]<<endl;
     cout<<vec[2]<<endl;
      cout<<vec[3]<<endl;

    cout<<vec.size()<<" "<<vec.capacity()<<endl;


}
