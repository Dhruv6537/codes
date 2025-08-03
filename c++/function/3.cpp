#include<iostream>
using namespace std;

int AP(int n){
    int ans;
    ans=( 3*n + 7 );
    return ans;
}

int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<AP(3);
}