//write a program to reverse the array without using any extra array;
//using normall swap technique like how we used too;




/***************************
  * Proper way;
*****************************/
#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&v){
   int i=0;
   int j= v.size()-1;
    
    while(i<=j)
    {
      int temp=v.at(i);
      v[i] = v[j];
      v[j] = temp;
      i++;
      j--;
    }
}

void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
       cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    reverse(v);
    display(v);
}

/*******************************
 * 
 * short way use sort(v.begin(), v.end() )
*********************************/


/*******************************
 * using for loops
 * *********************************
*/

#include<iostream>
using namespace std;

void reverse(int arr[],int n){

  for(int i=0; i<n; i++){
    int k= arr[i];
    int j= n-i-1;

    if(i>j){
        break;
    }
    arr[i] = arr[j];
    arr[j] = k;
  }

}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    display(arr,n);
    reverse(arr,n);
    display(arr,n);

}

/****************************
 * 
 *  my way
 * 
 * *************************
*/
#include<iostream>
#include<vector>

using namespace std;

void reverse(vector<int>&v){
    int n=v.size();
    int s;
    if(n%2==0){
        s=n/2;
    }
    else{
        s=(n+1)/2;
    }

for(int i=0; i<s; i++){
    int y = v.at(i);
    int x= v.at(v.size()-1-i);
    v.at(i) = v.at(v.size()-1-i);
    v.at(v.size()-1-i) = y;
}
}

void display(vector<int>&v){
    for(int i=0; i<5; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int>v;
    v.push_back(1);
        v.push_back(2);
            v.push_back(3);
                v.push_back(4);
                    v.push_back(5);

  reverse(v);
  display(v);

}