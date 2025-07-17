#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;

    }
    int gethealth(){
    return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level=ch; 
    }
};
int main(){
    hero ramesh;

    // cout<<"ramesh health is "<<ramesh.gethealth() <<endl;
    //  use setter

    ramesh.sethealth(80); 

    // ramesh.level='A' ;
    ramesh.setlevel('A');  

    cout<<"ramesh health is "<<ramesh.gethealth() <<endl;
    cout<<"level is "<<ramesh.getlevel()<<endl;

    return 0;

}