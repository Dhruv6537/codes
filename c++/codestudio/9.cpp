// painter partition problem

#include<iostream>
using namespace std;

bool ispossible(int a[], int n, int m, int mid){
    int paintsum = 0;
    int paintercount = 1;
    for(int i=0; i<n; i++){
        if( paintsum + a[i] <= mid){
            paintsum = paintsum+a[i];
        }
        else{
            paintercount++;
            if(paintercount>m || a[i]>mid){
                return false;
            }
            paintsum = a[i];

        }
    }
    return true;
}

int allocate(int a[], int n, int m){

    int s = 0;
    int sum = 0;
    for(int  i=0; i<n; i++){
        sum = sum+a[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s/2);
    while(s<=e){
        if(ispossible( a,n,m,mid)){
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
    int ar[6] = {1,2,3,4,5,6};
    cout<<allocate(ar,6,2);
}

