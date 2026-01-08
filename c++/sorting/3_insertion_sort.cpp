#include<iostream>
using namespace std;

void sort(int a[] , int n){
    
    for(int i=1 ; i<n ; i++){
        int temp = a[i];
        int j;
        for(j=i-1 ; j>=0 ; j--){
            if(a[j]>temp){
                //shift
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

}


int main(){
    int a[6] = {10,1,5,9,3,7};
    sort(a , 6);
    print(a , 6);
}

