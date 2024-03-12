//write a function to find out the first and last digit of a number without returning anything
#include<iostream>
#include<cmath>
using namespace std;

void no(int n,int* p1,int* p2)
{
    *p1=n;
    while(*p1>9){
        *p1= *p1/10;
    }
//    for(int i=1; *p1>9; i++){
//       *p1=*p1/10;
//    }

*p2 =n%10;

 }

int main(){
    int n;
    cin>>n;
 int fd;
int ld;
int *p1=&fd;
int *p2=&ld;
no(n,&fd,&ld);
cout<<fd<<" "<<ld;

}



///////another way/////



// #include<iostream>
// using namespace std;

// void giver (int n, int *fd, int *ld){

//   //LD;
//   *ld = n%10;
//   //fd

//   do{
    
//    n/=10;
 
//   }
//  while(n>9);
 
// *fd = n;

// }

// int main(){

//   int n,fd,ld;
//   cin>>n;

//   giver(n,&fd,&ld);
//   cout<<fd<<" "<<ld;

// }


