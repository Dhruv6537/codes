#include<iostream>
using namespace std;
int main(){

    // int n;
    // int i=1;
    // cout<<"enter the value :";
    // cin>>n;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;

    // }

    // return 0;

    // int n;
    // int sum=0;
    // int i=1;
    // cout<<"enter the value :";
    // cin>>n;

    // while(i<=n){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<"sum is :"<<sum;

    // return 0;

    int n;
    int sum=0;
    int i=1;

    cout<<"enter the value :";
    cin>>n;

    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"sum is :"<<sum;


}


