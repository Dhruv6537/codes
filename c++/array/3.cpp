#include<iostream>
using namespace std;

int update(int ar[],int n){
    ar[0]={120};

    for(int i=0 ; i<n ; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[3]={1,2,3};
    update(a,3);
    for(int i=0 ; i<3 ; i++){
        cout<<a[i]<<" ";
    }


}

// if we update element of array in a function then it also change in main function becausee we pass addres of first block of array to funcion
