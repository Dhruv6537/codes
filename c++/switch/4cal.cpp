#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b; 

    char op;
    cout<<"enter the operation :"<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<"sum is :"<<(a+b);
        break;

        case '-':
        cout<<"subtraction is :"<<(a-b);
        break;

        case '*':
        cout<<"multiplication is :"<<(a*b);
        break;

        case '/':
        if(b==0){
            cout<<"not valid"<<endl;
        }
        cout<<"division is :"<<(a/b);
        break;

        default:cout<<"please enter a valid operation"<<endl;
        
        

    }
    

}