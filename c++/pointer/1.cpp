#include<iostream>
using namespace std;

int main(){
    
    int i = 5;
    int *ptr = &i;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    double d = 2.6;
    double *p = &d;
    cout<<"size of pointer :"<<sizeof(p)<<endl;
    cout<<"size of double integer :"<<sizeof(d);
}