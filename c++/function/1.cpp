#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 or n==0){
        return 1;
    }

    return n*fact(n-1);
}
int nCr(int n, int r){
    int num=fact(n);
    int den=(fact(r)*fact(n-r));
    
    int ans=num/den;

    return ans;

}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<"answer is :"<<nCr(n,r)<<endl;
}