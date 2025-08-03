/*you are given an array consisting of n integers . Your task is to find all the distinct triplets present in an array whuch adds up to a 
given number K. An array is said to have a triplets with sum = K if there exist three indices i,j,k such thati!=j!=k and i!=j and 
a[i]+a[j]+a[k] ='K'. */

#include<iostream>
using namespace std;

int main(){
    int a[6]={1,2,3,4,5,-3};
    int K = 6;

    for(int i=0 ; i<6 ; i++){
        for(int j=i+1 ; j<6 ; j++){
            for(int k=j+1 ; k<6 ; k++){
                if(a[i] +a[j] +a[k] == K){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
}