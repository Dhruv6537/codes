#include<iostream>
using namespace std;

class A{

    public:
    void sayhello() {
        cout<<"hello dhruv"<<endl;
    }
    int sayhello(char name) {
        cout<<"hello dhruv"<<endl;
        return 0;
    }
    void sayhello(string name) {
        cout <<"hello "<< name <<endl;
    }


};

int main(){

    A obj;
    obj.sayhello();

}