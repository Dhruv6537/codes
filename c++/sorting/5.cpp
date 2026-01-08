// SELECTION SORT 
#include<iostream>
using namespace std;

void selectionsort(int a[] , int n ){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n ; j++ ){
            if(a[j]<a[min]){
                min = j;
            }
            
        }
        swap(a[i],a[min]);
    }
    return;

}

void print(int a[] ,  int n){
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[5] = {5,2,1,3,8};
    selectionsort(a,5);
    print(a,5);

}