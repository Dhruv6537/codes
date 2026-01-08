// book allocation problem
#include<iostream>
using namespace std;

bool ispossible(int a[],int n,int m,int mid){
    int studentcount = 1;
    int pagesum = 0;
    
    for(int i=0 ; i<n ;i++){
        if(pagesum+a[i]<=mid){
            pagesum = pagesum+a[i];
        }
        else{
            studentcount++;
            if(studentcount>m || a[i]>mid){
                return false;
            }
            pagesum = 0;
            pagesum = a[i];
        }
    }
    return true;
    

}

int allocation(int a[],int n,int m){
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n ; i++){
        sum = a[i]+sum;
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(ispossible(a,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;

    }
    return ans;


}
int main(){
    int arr[4] = {12,34,67,90};
 
    cout<<allocation(arr,4,2);

}

