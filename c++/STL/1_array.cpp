#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"print last :"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(5);
    cout<<"capacity->"<<v.capacity()<<endl;

    
    cout<<"element at 2 index is:"<<v.at(2)<<endl;
    cout<<"size is :"<<v.size()<<endl;

    cout<<"front element is->"<<v.front()<<endl;
    cout<<"last element is->"<<v.back()<<endl;
    
    cout<<"before pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

