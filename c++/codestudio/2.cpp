/*You are given an integer array 'ARR' of size 'N' and an integer 'S'. your task is to return the list of all pairs of elements 
such that each sum of elements of each pair equals 'S'.*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int S=5;
    for(int i=0 ; i<5 ; i++){
        for(int j =i+1; j<5 ; j++){
            if(a[i] +a[j] == S){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }

    
      
    
}