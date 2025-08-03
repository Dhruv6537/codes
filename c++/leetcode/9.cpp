// to find duplicates in an arary
#include<iostream>
using namespace std;

// void duplicate(int arr[] , int size){
//     for(int i=0 ; i<size ; i++){
//         for(int j=i+1 ; j<size ; j++){
//             if( arr[i] == arr[j]){
//                 cout<<arr[i];
//             }
//         }
//     }
// }
// another approach by XOR
int duplicate(int arr[] , int size){
    int ans = 0;
    for(int i=0 ; i<size ; i++){
        ans = ans^arr[i];
    }
    for(int i=1 ; i<size ; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int a[5]={2,2,3,4,1};
    cout<<duplicate(a , 5);

}



