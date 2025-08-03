/*you are given two array 'A' and 'B' of size 'N' and 'M' respectively . Both these arrays are sorted in non-decreasing order . you have to find 
the intersection of these two arrays . Intersection of two arrays is an array that consist of all the elements occuring in both arrays .*/

#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3};  
    int b[]={2,3,4};
    int i=0;  
    int j=0;  
    int element;
    while(i<3 && j<3){
        if(a[i]==a[j]){
            cout<<a[j];
            i++;
            j++;
        }
        else if(a[i]<a[j]){
            i++;
        }
        else{
            j++; 
        }
    } 
    
}

