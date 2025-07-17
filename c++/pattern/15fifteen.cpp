// D
// CD
// BCD
// ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch;
            col=col+1;
            ch=ch+1;

        }
        cout<<endl;
        row=row+1;
    }
}