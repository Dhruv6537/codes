// to reverse the array 

#include<iostream>
using namespace std;

int reverse(int a[] , int n){
    int start=0 ;
    int end=n-1 ;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void printarray(int a[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int arr[5]={12,-1,3,90,4};
    
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,5);
    printarray(arr,5);

}
