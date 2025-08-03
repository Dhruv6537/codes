// to swap the alternate element of array
#include<iostream>
using namespace std;

void printarray(int ar[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<ar[i]<<" ";
    }
}
void swapalternate(int arr[] , int size){
    for(int i=0 ; i<size ; i+=2){
        if(i+1 < size){
            swap( arr[i] , arr[i+1] );
        }
    }
}


int main(){
    int a[8]={5,1,7,2,9,3,6,8};
    int b[5]={5,1,7,3,8};

    swapalternate(b,5);
    printarray(b,5);
}