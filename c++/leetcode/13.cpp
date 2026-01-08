// reverse the array

#include<iostream>
using namespace std;

int main(){
    int a[5] = {6,3,8,2,9};
    int s=0;
    int e=4;

    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
       

    }

    for(int i=0 ; i<5 ; i++){
        cout<<a[i]<<" ";
    }
}

