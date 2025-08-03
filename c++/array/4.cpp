// Linear search
#include<iostream>
using namespace std;

bool search(int a[],int size,int key){
    for(int i=0 ; i<=size ; i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[10]={1,4,-1,8,3,8,34,6,-12,100};
    cout<<"enter the element to search :"<<endl;

    int key;
    cin>>key;

    bool found=search(arr,10,key);
    
    if( found ){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present "<<endl;
        
    }

} 

