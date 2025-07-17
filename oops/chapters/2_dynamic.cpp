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
    // static allocation 
    hero a;
    cout<<"level is "<<a.getlevel()<<endl;
    cout<<"heatlh is "<<a.gethealth()<<endl;
    
    // dynamically
    hero *b =new hero;
    // cout<<sizeof(new hero)<<endl;
    b->setlevel('A');
    b->sethealth(80);

    cout<<"level is "<<(*b).getlevel()<<endl;
    cout<<"heatlh is "<<(*b).gethealth()<<endl;
    // or
    cout<<"level is "<<b->getlevel()<<endl;
    cout<<"heatlh is "<<b->gethealth()<<endl;

    

}