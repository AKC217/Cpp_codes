#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

/******************
 * rombus
 *         ****
 *        ****
 *       ****
 *      ****
 * 
 * *******************/
// for(int i=1; i<=n; i++)
// {
//     for(int j=1; j<=n-i; j++)
//     {
//         cout<<" ";
//     }
//     for(int k=1;k<=n;k++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
/*******************************
 *                 *
 *               * * *
 *             * * * * *
 *           * * * * * * *
 * pyramid
 * ***********************************
// */   //int a=1;   
// for(int i=1; i<=n; i++)   
// {  
//     for(int k=1; k<=n-i; k++)
//     {
//         cout<<" ";
//     }

//     for(int j=1;j<=i;j++)
//     {
//         cout<<"*";
//     }
//     if(i>1){
      
//         for(int m=1; m<=a;m++)
//         {
//             cout<<"*";
//         }
//         a+=1;
//     }
//     cout<<endl;
    
    
// }  
/////another  way////////
// for(int i=1; i<=n; i++)
// {
//     for(int k=1; k<=n-i;k++)
//     {
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }                                                                     
/*****************************
 * number pyramid
 *             1
 *            121
 *           12321
 *          1234321
*******************************/
// for(int i=1; i<=n; i++){
//     for(int k=1; k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1; j<=i; j++){
//         cout<<j;
//     }
//     for(int l=i-1; l>=1; l--){
//         {
//         cout<<l;
//         }
        
//     }
//     cout<<endl;
// }
/*********************************
  star diamond  
      *
     ***
    *****
   *******
    *****
     ***
      *    n=4 lines printed=7:n*2-1;

 *************************************/
//#code
// int nsp=n-1,nst=1;
// for(int i=1; i<=n*2-1; i++){
//     //spaces
//     for(int j=1; j<=nsp; j++)
//     {
//         cout<<" ";
//     }if(i<=n-1) nsp--;
//     else nsp++;
// //stars
//     for(int k=1; k<=nst; k++){
//         cout<<"*";
//     }if(i<=n-1) nst+=2;
//     else nst-=2;
// cout<<endl;
// }
////////////////////////////////////////////
/*****************************************
 * n=4;  4*2-1=7
 * star bridge 
 * 
 *   *******
 *   *** ***
 *   **   **
 *   *     *
 * 
 * /////////////////////////
*/
//#code:
// int nsp=1;
// int nst=n-1;
// for(int i=1; i<=n; i++)
// {
// if(i==1){
//     for(int j=1; j<=n*2-1; j++){
//         cout<<"*";
//     }
// }
// else{
//   for(int k=1; k<=nst; k++)
//         {
//             cout<<"*";
//         }

//   for(int l=1; l<=nsp; l++){
//             cout<<" ";
//         }
//         nsp+=2;
//          for(int s=1; s<=nst; s++)
//         {
//             cout<<"*";
//         }
//         nst--;}
//   cout<<endl;}

///**************there is a second method too but it is too complicated and boring to understand so.....

//////////////////////////////////
 /*************************************
 Number star bridge
 
 1234567
 123 567
 12   67
 1     7

 *****************/
// int nsp=1;
// int nst=n-1;

// for(int i=1; i<=n; i++)
// {
    
// if(i==1){
//     for(int j=1; j<=n*2-1; j++){
//         cout<<j;
        
//     }
// }
// else{
//     int g=0;
//   for(int k=1; k<=nst; k++)
//         {
//             cout<<k;
//             g++;
//         };
//   for(int l=1; l<=nsp; l++){
//             cout<<" ";
//             g++;
//         }
//         nsp+=2;
//          for(int s=1; s<=nst; s++)
//         {   g++;
//             cout<<g;
//         }
//         nst--;}
//   cout<<endl;}
//////////////////////////////////
/***********************
 * Number spiral
 * 
 *   4444444 
 *   4333334
 *   4322234
 *   4321234
 *   4322234
 *   4333334
 *   4444444
***********************/
// for(int i=1; i<=n*2-1; i++){
//     for(int j=1; j<=n*2-1; j++){
//         if(i==1 || j==1 || i==n*2-1 ||j==n*2-1){
//             cout<<"4";
//         }
//         else if(i==2||j==2 || i==n*2-2 ||j==n*2-2){
//             cout<<"3";
//         }
//          else if(i==3||j==3 || i==n*2-3 ||j==n*2-3){
//             cout<<"2";
//         }
//         else cout<<"1";
// }
//     cout<<endl;
// }
///**************there is a second method too but it is too complicated and boring to understand so.....

}