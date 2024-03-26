//there are aperticular no of students in a class
//Given an array of marks if any student gets less than 35 than print there roll no.

#include<iostream>
using namespace std;
int main(){

int marks[5];

// for(int i=0; i<5; i++){
// cin>>marks[i];
// if(marks[i]<35){
//     cout<<i;
// }
// }

// taking input
    for(int i=0; i<5; i++){
       cin>>marks[i];
    }
//printing output
for(int j=0; j<5; j++){
    if(marks[j]<35){
    cout<<j<<" ";
    }
}



}