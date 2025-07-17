//    1
//   22
//  333
// 4444   
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;

    int row=1;
    while(row<=n){
        int space=1;
        while(space<=n-row+1){
            cout<<" ";
            space=space+1;
        }

        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }

}