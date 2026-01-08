#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    m[1] = "Dhruv";
    m[2] = "Saraf";
    m[13] = "Yash";

    m.insert({5,"Umesh"});
    m.insert({6,"Sonu"});


    cout<<"before erase :"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    cout<<"finding -13 ->"<<m.count(-13)<<endl;
    m.erase(13);
    
    cout<<"After erase :"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }


    auto it = m.find(5);

    for(auto i=it ; i!=m.end() ; i++ ){
        cout<<(*i).first<<endl;
    }
}