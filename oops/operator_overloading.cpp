#include<iostream>
using namespace  std;

class demo{
    public: int x;

    void setdata(int a){
        x=a;
    }
    int display()const{
        cout<<x<<endl;
    }

    void show()const{
        cout<<"hi"<<endl;
    }
    void dis(){
        cout<<"bye"<<endl;
    }
};

int main(){
    demo ob const;
    // ob.setdata(10);
    // ob.display();
    // ob.show();
    ob.dis();
}