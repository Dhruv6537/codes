// INSERTION SORT 
#include<iostream>

using namespace std;

void insertionsort(int a[] , int n){
    for(int i=1 ; i<n ; i++){
        int key = a[i];
        int j= i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];

            j--;


        }
        a[j+1] = key;
        
    }
    return;
}

void print(int a[] ,  int n){
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[5] = {4,2,8,5,1};
    insertionsort(a,5);
    print(a , 5);

    
}