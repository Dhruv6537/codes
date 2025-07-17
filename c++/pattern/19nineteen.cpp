// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entr n :";
    cin>>n;
    int row=1;

    while(row<=n){
        int space=1;
        while(space<=row-1){
            cout<<" ";
            space=space+1;
        }

        int col=1;
        while(col<=n-row+1){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}