// mountain array 
#include<iostream>
using namespace std;

int mountain(int arr[] , int size ){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return arr[start];
}

int main(){
    int a[5] = {1,2,5,4,3};
    cout<<"Peak element is :"<<mountain(a , 5 );
     
    return 0;
}