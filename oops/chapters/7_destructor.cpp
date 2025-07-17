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
    hero(hero &temp){

        char *ch=new char[strlen(temp.name) + 1]; // +1 for null characteer
        strcpy(ch ,temp.name);
        this->name=ch;

        cout<<"copy constructor caled "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    
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

    ~hero(){
        cout<<"destructor called"<<endl;
    }
};

int main(){

    //static
    hero a;

    //dynamic
    hero *b=new hero();
    delete b ;
    // we have to manually call destructor for dynamic
    return 0;
}