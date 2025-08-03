#include<iostream>
using namespace std;

void printarray(int a[],int size){
    for(int i=0 ; i<size ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[10]={0};
    printarray(a,4);
}