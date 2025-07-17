#include<iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout<<"base class show"<<endl;

    }
};

class derived{
    public:
    void show(){
        cout<<"derived classs show"<<endl;
    
    }
};

int main(){
    base *ptr;
    base obj;
    ptr=&obj;
    ptr->show();
    derived obj1;
    obj1.show();


}