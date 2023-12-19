#include<iostream>
#include<cmath>

using namespace std;

int fact(int x){
int fact=1;
for(int i=2; i<=x; i++){
    fact *=i;
}
return fact;

}

int main(){
int n;
int r;
cin>>n>>r;
int fact_nr = n-r;

int fact_n =fact(n);
int fact_r =fact(r);
int factk =fact(fact_nr);

int combination =fact_n/(fact_r*factk);
cout<<"Combination : "<<combination;
}
 
///******Long way*********//




// #include<iostream>
// #include<cmath>
// using namespace std;

// int factorial(int n,int r){
// //n
//     int fact_n=1;

//      for(int i=2; i<=n; i++){
      
//       fact_n*= i;
//       }
//       cout<<"The value of factoiral n is: "<<fact_n<<endl;

// //r
//     int fact_r=1;

//      for(int j=2; j<=r; j++){
      
//       fact_r*= j;
//       }
//       cout<<"The value of factorial r is: "<<fact_r<<endl;
    
// //n-r
// int H = (n-r);

// int fact_H=1;

//      for(int k=2; k<=H; k++){
      
//       fact_H*= k;
//       }
//       cout<<"The value of factorial (n-r) is: "<<fact_H<<endl;

// //combination
// int comb = fact_n/(fact_r*fact_H);

// return comb;


// }

// int main(){
//      int n;
//      int r;

//      cin>>n;
//      cin>>r;

   
//     cout<<"Combination: "<<factorial(n,r);

//       return 0;
// }
