/*1 2 3 4
4 5 6 7
7 8 9 10
10 11 12 13
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j+(i-1)*3<<" ";
            j=j+1;        
        }

    cout<<endl;
    i=i+1;
    }
}