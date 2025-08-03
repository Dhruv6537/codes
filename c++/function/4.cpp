#include<iostream>
#include<math.h>
using namespace std;

int countbits(int n){
    int count=0;
    while(n !=0){
        if(n & 1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int bits(int a,int b){
    int count1 = countbits(a);
    int count2 = countbits(b);
    return count1 + count2 ;
}

int main(){
    int a,b;
    cout<<"enter a and b :"<<endl;
    cin>>a>>b;
    cout<<"1s are : "<<bits(a,b);
}