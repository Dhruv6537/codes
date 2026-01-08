#include<iostream>
using namespace std;

int sort(int a[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        int minindex = i;
        for(int j = i+1 ; j<=n ; j++){
            if(a[j] < a[minindex]){
                minindex = j;
            }
        }
        swap(a[minindex] , a[i]);  
    }
}

void print(int a[] , int n){
    for(int i=0 ; i<n ; i ++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int a[4] = {4,3,2,1};
    sort(a , 4);
    print(a , 4);
}
