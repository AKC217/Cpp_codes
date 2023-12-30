//the question here is cn we have multiple return values in a funtion that is called
//Ans:yes we can have mor than one funtion ,but once a fuction a function return a value it would not return value 
//for another return funtion since after first return value only our funtion would we over there only.
//Example:
#include<iostream>
using namespace std;
int maximum(int a,int b,int c){

    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{ return c;}

    return a+b+c;

}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
   cout<< maximum(a,b,c);
}










