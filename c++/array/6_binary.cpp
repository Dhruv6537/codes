#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    /* this formula is use for mid term because in case to prevent getting error if mid term goes out of integer range ,
    as now it will get subtract from bigger term so it will remain in integer range*/
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{// key < arr[mid] 
            end = mid-1;
        }

        mid = start + (end - start)/2;;
    }
    
    return -1;
}

int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[7] = {1,2,3,4,5,6,7};

    int searcheven = binarysearch(even , 8 , 6);
    int searchodd = binarysearch(odd , 7 , 6);

    cout<<"index of 6 is :"<<searcheven<<endl;
    cout<<"index of 6 is :"<<searchodd<<endl;
}
