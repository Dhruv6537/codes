// To print max and min number in an array
#include<iostream>
using namespace std;


int getmax(int a[], int size){
    int maxi=INT32_MIN;
    for(int i=0 ; i<size ; i++){
    //     if( a[i]>maxi ){
    //         maxi = a[i];
    // OR
        maxi = max(a[i],maxi);
    //     }
    }
    return maxi;
}
int getmin(int a[], int size){
    int min=INT32_MAX;
    for(int i=0 ; i<size ; i++){
        if( a[i]<min ){
            min = a[i];
        }
    }
    return min;
}


int main(){
    int n;
    cin>>n;
    int ar[100];

    for(int i=0 ; i<n ; i++){
        cin>>ar[i];
    }

    cout<<"maximum value is :"<<getmax(ar,n)<<endl;
    cout<<"minimum value is :"<<getmin(ar,n);
    

}

