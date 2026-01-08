// square root of element using binary search
#include<iostream>
using namespace std;

long long int squrtinteger(int n){
    int s = 0;
    int e = n-1;
    long long int ans = -1;
    long long int mid = s+(e-s)/2;
    while(s<e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square<n){
            ans = mid;
           s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
//answer with more precision
double moreprecision(int n , int precise , int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i=0 ; i<precise ; i++){
        factor = factor/10;
        for(double j=tempsol ; j*j<n ; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){

    int n;
    cout<<"enter n :";
    cin>>n;
    int tempsol = squrtinteger(n);
    cout<<"square root is :"<<moreprecision(n , 3 , tempsol);
}

