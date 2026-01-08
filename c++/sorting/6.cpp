// QUICK SORT
#include<iostream>
using namespace std;



int partition(int a[], int high, int low ){
    int pivot = a[high];
    int i = low-1;

    for(int j=low ; j<high; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }   
    }
    swap(a[i+1] , a[high]);
    return i+1;

}

void quicksort(int a[] , int high , int low){
    if(low<high){
        int p = partition(a , high , low);
        quicksort(a , p-1 , low);
        quicksort(a , high , p+1);
    }
}

void print(int a[] ,  int n){
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    int a[] = {5,1,9,0,4,8,2,22,23,45,67,89,123,468,345,987,457,285,853,566,286,396,6,876,2345,98765,23456,98,345678,87,34567890};
    int n = sizeof(a)/sizeof(a[0]);

    quicksort(a , n-1 , 0);
    print(a , n);
   
} 



