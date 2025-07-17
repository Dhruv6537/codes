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
    
    
    void print(){

        cout<<level<<endl;
        cout<<health<<endl;

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

//  _object created statically 
hero ramesh(10);
// cout<<"Address of ramesh "<<&ramesh << endl;

ramesh.print() ;

//    dynamically
hero *h=new hero(11);
h->print();

hero temp(22, 'B');
temp.print();

} 
