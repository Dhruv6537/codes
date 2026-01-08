#include<iostream>
using namespace std;

void sort(int a[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i] > a[j]){
                swap(a[j] , a[i]);
            }
            else{
                continue;
            }
        }
    }
}

void print(int a[] , int n){
    for(int i=0 ; i<n ; i ++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int a[5] = {10,1,9,6,7};
    sort(a , 5);    
    print(a , 5);    
}
            