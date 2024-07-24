#include<iostream>  //leetcode 88
#include<vector>
using namespace std;


int main(){

vector<int>v1;
vector<int>v2;

v1.push_back(1);
v1.push_back(3);
v1.push_back(6);
v1.push_back(8);

v2.push_back(2);
v2.push_back(4);
v2.push_back(5);
v2.push_back(7);
v2.push_back(9);
v2.push_back(10);
v2.push_back(11);
v2.push_back(12);


vector<int>v3;
int n = v1.size() + v2.size();

int i=0;  
int m=v1.size();
int p =v2.size();
int k=0;
int j=0;

while(i<m && j<p){

    if(v1[i]<v2[j]){
        v3.at(k) = v1.at(i);
        i++;
    }

    else{
        v3.at(k) = v2.at(j);
        j++;
    }

    k++;
}

if(i>=m){
    while(j<p){
    v3[k] = v2[j];
    j++;
    k++;
}
}

else if(j>p){
    while(i<n){
    v3[k] = v1[i];
    i++;
    k++;
    }
}

for(int i=0; i<v3.size(); i++){
    cout<<v3[i]<<" ";
}


}



/**********************
 *  My way=best way
 * **********************
*/


// #include<iostream>
// using namespace std;


// int main(){
    
// int arr1[4] = {1,4,5,8};
// int arr2[7] = {2,3,6,7,10,11,12};

// int n;    
// n= 7+4;

// int arr3[n];

// int i= 0;
// int j=0;
// int k=0;

// while(k<n){
//     if(arr1[i]<arr2[j] && i<4){
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }
    
//     else{
//         arr3[k]= arr2[j];
//         j++;
//         k++;
//     }
// }

// for(int i=0; i<n; i++){
//     cout<<arr3[i]<<" ";
// }



// }