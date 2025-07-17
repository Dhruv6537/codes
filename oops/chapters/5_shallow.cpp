#include<iostream>
#include<string.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char *name;
    char level;

    // default constructor
    hero(){
        cout<<"constructor called "<<endl;  
        name = new char[100];  
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
    // hero(hero &temp){
    //     cout<<"copy constructor caled "<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    
    void print(){
        cout<<endl;
        cout<<"[ Name :"<<this->name<<", ";
        cout<<"level is :"<<level<<endl;
        cout<<"health :"<<health<<" ]";

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

    void setname(char name[]) {
        strcpy(this->name ,name);
    }
};

int main(){

    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Dhruv";
    hero1.setname(name) ;

    hero1.print();

    // use default copy  constructor

    hero hero2(hero1);
    hero2.print();

    hero1.name[5]='e';
    hero1.print();

    hero2.print();



// in shallow we access same memory by 2 names




}
