/*given an integer array nums of length n , where all the integers of nums are in range [1,n] and each integer appears once or twice ,
return an array of all the integers that appear twice*/

#include<iostream>
using namespace std;

void duplicate(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}

int main(){
    int a[7]={1,9,2,3,8,9,2};

    duplicate(a,7);
}