// sorting 0 and 1
#include<iostream>
using namespace std;
void printing(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void sorting(int ar[] , int size){
    int left =0;
    int right = size-1;
    while(left<right){
        while( ar[left] == 0 && left<right){
            left++;
        }
        while( ar[right] == 1 && left<right){
            right--;
        }
        if(ar[left] == 1 && ar[right] == 0 && left<right)
        {
            swap(ar[left] , ar[right]);
            left++;
            right--;
        }
        }
    }

int main(){
    int a[6]={1,1,0,0,1,0};

    sorting(a , 6);
    printing(a , 6);
}