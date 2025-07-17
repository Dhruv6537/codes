#include<iostream>
using namespace std;
int main(){


// int n;
// int sum=0;
// int i=1;

// cout<<"enter the value :";
// cin>>n;

// while(i<=n){
//     if(i%2==0){
//         sum=sum+i;
//     }
//     i=i+1;
// }
// cout<<"sum is :"<<sum;

int n;
int i=2;

cout<<"enter the number :";
cin>>n;

while(i<n){
    if(n%i==0){
        cout<<" not prime number for "<<i<<endl;
    }
    else{
        cout<<"prime number for "<<i<<endl;
    }

    i=i+1;
}





}