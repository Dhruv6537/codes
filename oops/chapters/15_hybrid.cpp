// combination of more than one type of inheritsnce is called hybrid inheritance
#include<iostream>
using namespace std;

class A {
    public:
    void speak(){
        cout<<"speaking"<<endl;

    }
};

class B{
    public:
    void talk(){
        cout<<"talking"<<endl;
    }
};

class C:public A{

};

class D:public A,public B{

};

int main() {
    C ob1;
    ob1.speak();

    D ob2;
    ob2.speak();
    ob2.talk();
}
