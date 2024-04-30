#include<iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};
    // int *ptr = arr;
    // //printing array with pointers
 
    // for(int i=0; i<5; i++){
    //     // cout<<arr[i];
    //     cout<<*ptr<<" ";
    //     ptr++;  // 4byte added

    // }

    // ptr =arr;

/**************************************************************/
int *p =arr;
// for(int i=0; i<5; i++){
//       cout<<arr[i];
//     }

// cout<<endl;
*p++;  
cout<<*p; //2
cout<<p[1]; //3
cout<<endl;

for(int j=0; j<5; j++){
        cout<<*p<<" ";
        p++; 
 }  //2 3 4 5 4

/****************************************************/

// int *pr = arr;
// *pr = 8;
// pr++;
// *pr =9;
// pr--;

// for(int i=0; i<5; i++){
//     cout<<*pr<<" ";
//     pr++;   //8 9 3 4 5 

// }



}