// by using ambiguity we can access two function of same name by resolution operator ::


#include<iostream>
using namespace std;

class A {

    public:
    void talk(){
        cout<<"talking"<<endl;
    }
};

class B {
    public:
    void talk(){
        cout<<"speaking"<<endl;
    }
};

class C:public A,public B{

};

int main (){

    C object;
    object.A::talk();
    object.B::talk();

    return 0;
}
