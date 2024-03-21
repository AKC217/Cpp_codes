#include<iostream>
using namespace std;
int main()
{
   int n;
   int m;
   cin>>n;

//*******just uncomment the code you want******//

//Rectangle//

// *****
// *****
// *****


// cin>>n;
// cin>>m;

// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=m; j++)
//    {
//       cout<<"*";
//    }
//    cout<<endl;
// }

/****** square*****/

// ****
// ****
// ****
// ****

// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n; j++)
//    {
//       cout<<"*";
//    }
//    cout<<endl;
// }

/*************************
number square
1234
1234
1234
1234
****************************/
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n; j++){
//       cout<<j;
// }
// cout<<endl;
// }
/*************************
number square
1111
2222
3333
4444
****************************/
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n; j++)
//    {
//       cout<<i;
//    }
//    cout<<endl;
// }
/*******star triangle*******
*
**
***
****

**************/
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=i; j++)
//    {
//       cout<<"*";
//    }
//    cout<<endl;
// }

/***********star triangle reverse*************/
/*

*****
****
***
**
*

*/

// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n+1-i; j++)
//    {
//       cout<<"*";

//    }
//    cout<<endl;
// }

/************number triangle*********
1
12
123
1234
*/
// cin>>n;
// for(int i=1; i<=n; i++)
// {
//     for(int j =1; j<=i; j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;
// }
/****************
1
13
135
1357
odd number triangle*****/

// for(int i=1; i<=n; i++)
// {
//    int a=1;
//    for(int j=1; j<=i; j++)
//    {
//       cout<<a;
//       a+=2;
//    }
//    cout<<endl;
// }
/**********
Another way
************/


// for(int i=1; i<=n; i++)
// {
//     for(int j=1; j<=i; j++)
//     {   
//         cout<<j*2-1;
        
//     }
    
//     cout<<endl;
// }

/********************************
/********************************
ABCD
ABCD
ABCD
ABCD*/
//*************************************
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n;j++)
//    {
//       cout<<(char)(j+64);
//    }
//    cout<<endl;
// }
/*
   *  
   *  
** * ** 
   *
   * 
star plus*/
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=n; j++)
//    {
//       if(j==(n+1)/2  ||  i==(n+1)/2)
//       {
//          cout<<"*";
//       }
//       else{
//          cout<<" ";
//       }
//       }
// cout<<endl;
// }
//////another way////////
// for(int i=1; i<=n;  i++)
// {
//     for(int j=1; j<=n; j++){
//         if(i==j || j==n+1-i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
/******************************************
 * is triangle ko kya nam do??????????
 *     1
 *     23
 *     456
 *     78910
 * 
****************/
// int a=1;
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=i; j++)
//    {
//       cout<<a;
//       a+=1;
//    }
  
//    cout<<endl;
// }
/*******************
 * Binary triangle
 *   1
 *   01
 *   101
 *   0101 */
/*******************/
// for(int i=1; i<=n; i++)
// {
//    for(int j=1; j<=i; j++){
//       if(i==j || i-j==2)
//       {
//          cout<<"1";
//       }
//       else{
//          cout<<"0";
//       }
//    }
//    cout<<endl;
// }
//Another way
///////////////////////////
//  for(int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++)
//    {
//       if(i%2==0)
//       {
//          cout<<"0";
         
//       }
//       else{
//          cout<<"1";
//       }
//  }
//    cout<<endl;
//  }

/*******************
 * star triangle flipped
 *           *
 *         * *
 *       * * *
 *     * * * *
 * ***********************
*/
// for(int i=1;i<=n; i++)
// {
//    for(int k=1;k<=n-i;k++)
//    {
//       cout<<" ";
//    }
//    for(int j=1; j<=i;j++)
//    {
//       cout<<"*";
//    }
//    cout<<endl;
// }
}