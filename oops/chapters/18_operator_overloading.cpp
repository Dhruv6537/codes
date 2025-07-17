#include<iostream>
using namespace std;

class A {

    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    void operator+ (A &obj) {
        int value1= this->a;
        int value2=obj.a;
        cout<< "output "<< value2-value1 <<endl;
    }
    /*this->a:

The keyword this refers to the current object (on the left-hand side of the + operator).

So this->a is accessing the a value of the current object.

obj.a:

This accesses the a value of the object passed as an argument (on the right-hand side of the + operator).*/

void operator() () {
    cout<<"main bracket hu "<<this->a<<endl;
}
};

int main() {

    A obj1, obj2;

    obj1.a =4;
    obj2.a =7;

    obj1+obj2;

    obj2();

}