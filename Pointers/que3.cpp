//Write a program to find out the product of two numbers using pointers.
#include<iostream>
using namespace std;

#include <bits/stdc++.h>
int main() {
int x, y;
cin >> x >> y;
int *ptrX, *ptrY;
ptrX = &x;
ptrY = &y;
int ans;
int *ptrAns = &ans;
*ptrAns = (*ptrX) * (*ptrY);
cout << *ptrAns << endl;
return 0;
}

// void cal(int *a,int *b)
// {
//     cout<<(*a)*(*b);
// }

// int main()
// {
// int a,b;
// cin>>a>>b;
// cal(&a,&b);

// }