// to find a unique element in the array which is not repeating itself 
#include<iostream>
using namespace std;

int uniqueelement(int arr[] , int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
       ans=ans^arr[i];
    }
    return ans;
    
}

int main(){
    int a[7]={1,5,1,3,7,5,7};

    cout<<uniqueelement(a , 7);

}