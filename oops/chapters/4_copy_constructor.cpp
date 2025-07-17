#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    // default constructor
    hero(){
        cout<<"constructor called "<<endl;    
    }

    // parameterized constructor 
    hero(int health){
        this->health=health;
    }    


    hero(int health, char level){
        this->level=level;
        this->health=health;

    }
    // copy constructor
    hero(hero &temp){
        cout<<"copy constructor caled "<<endl;
        this->health = temp.health;
        this->level = temp.level;

    }
    
    
    void print(){
        cout<<"level is :"<<level<<endl;
        cout<<"health :"<<health<<endl;

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
    hero r(80 ,'A');
    r.print();
    // copy constructor
    hero s(r);
    s.print();

}


// when we write copy constructor in class then the constructor which is called after class is dead 