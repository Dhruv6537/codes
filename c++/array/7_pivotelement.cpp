//pivot element in rotated array
#include<iostream>
using namespace std;

int getpivot(int a[] , int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(a[mid] >= a[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[5] = {8,10,17,1,3};

    cout<<"pivot is :"<<getpivot(arr , 5);
}  
