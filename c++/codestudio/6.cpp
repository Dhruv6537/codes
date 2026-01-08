/*you have been given a sorted array consisting of n elements . You are also given an element k .
now the array is rotated at some pivot point unknown to you. for example if a=[1,3,5,7,8], then after rotating array at index 3 , the aray 
will be a=[7,8,1,3,5]. now your task is to find  index at which k is present */

#include<iostream>
using namespace std;
int getpivot(int a[], int size){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2; 

    }
    return e;
}

int binarysearch(int a[] , int s , int e , int key){
    int start = s;
    int end = e;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(a[mid] == key){
            return mid;
        }

        if(key > a[mid]){
            start = mid+1;
        }
        else{// key < arr[mid] 
            end = mid-1;
        }

        mid = start + (end - start)/2;;
        
    }
    return -1;
}

int findposition(int a[] , int size , int k){
    int pivot = getpivot(a,size);
    if(k >= a[pivot] && k <= a[size-1]){
        // binary search on second line
        return binarysearch(a , pivot , size-1 , k);

    }
    else{// binary search on frst line
        return binarysearch(a , 0 , pivot-1 , k);
    }
}

int main(){

    int arr[5] = {12,15,18,2,4};
    cout<<"position is :"<<findposition(arr , 5 , 12);
    

    
}