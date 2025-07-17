#include<iostream>
using namespace std;

class A{
    int a;
    int b;
    int c;
    public:
    int add(a=0,b=0,c=0){
        return a+b+c;
    }
}

int main(){

    cout<<"addition is :"<<add();
    cout<<"addition is :"<<add(2,3);
}