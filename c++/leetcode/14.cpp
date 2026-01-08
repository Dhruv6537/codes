#include<iostream>
using namespace std;


void sort(int a[] , int n){
    for(int i=1 ; i<n ;i++){
        int temp = a[i];
        int j;
        for(j = i-1 ; j>=0 ; j--){
            if(a[j]>temp){
                a[j+1] = a[j];
            }
            else{
                break;
            }

        }
        a[j+1] = temp;
    }
}

void print(int a[] , int n){
    for(int i=0 ; i<n ; i ++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int a[5] = {7,1,9,2,6};
    int b[5] = {17,12,19,21,16};
    sort(a , 5);
    sort(b , 5);
    print(a , 5);
    print(b , 5);
    
   

}

