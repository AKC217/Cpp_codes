//Predict the output of the following code snippet.

#include<iostream>
using namespace std;
int main() {


//1st
// int a = 15, b = 20;
// int *ptr = &a;        
// int *ptr2 = &b;
// *ptr = *ptr2; 
// cout<<*ptr;    

//********2nd*******//
// int a = 10, b = 20;
// int *ptr = &a;   /// ptr = a ka a200
// b = *ptr + 1;     //b= 11
// ptr = &b;           // ptr = b200
// cout << *ptr <<" " << a <<" "<< b;  


//**********3rd********//
int a = 10, b = 20;
int *ptr;
*ptr = 5;


/*The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which
does not belong to our program and hence might result in Segmentation Fault when we
are trying to access it.*/

}