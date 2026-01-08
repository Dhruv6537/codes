#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"finding 4"<<binary_function(v.begin(),v.end(),4)<<endl;
}