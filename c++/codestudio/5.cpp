/*you have given a sorted array consisting of N elements . You are also given an inteegr k. now your task is to find the first 
and last occurence of 'k' in arr*/

#include<iostream>
using namespace std;

int fisrtocc(int arr[] , int size , int key){
    int s = 0 , e = size-1;
    int ans = 0;
    int mid = s+(e-s)/2 ;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        mid = s+(e-s)/2 ;
    }
    return ans;
}

int lastocc(int arr[] , int size , int key){
    int s = 0 , e = size-1;
    int ans = 0;
    int mid = s+(e-s)/2 ;
   
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
            
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        mid = s+(e-s)/2 ;
    }
    return ans;
    
}

int main(){

    int a[5] = {1,2,3,3,5};
    cout<<"first occurundrence of 3 is at index :"<<fisrtocc(a , 5 , 3)<<endl;
    cout<<"last occurence of 3 is at index :"<<lastocc(a , 5 , 3);


}

// if we hace to find the total  umber of occurence than we can use fromula (last index - first index)+1