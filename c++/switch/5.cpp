#include<iostream>
using namespace std;
int main(){
    int money;
    int value=1;
    cout<<"enter the money:"<<endl;
    cin>>money;
    int remaining;
    int remaining1;
    int remaining2;
    int remaining3;

    switch(value){
        case 1:{
            int notes=money/100;
            remaining=money%100;
            cout<<"100 ruppe notes are :"<<notes<<endl;
        }
       case 2:{
        int notes=remaining/50;
        remaining1=remaining%50;
        cout<<"50 ruppe notes are :"<<notes<<endl;
        }
        case 3:{
            int notes=remaining1/20;
            remaining2=remaining1%20;
            cout<<"20 ruppe notes are :"<<notes<<endl;
        }
        case 4:{
            int notes=remaining2/1;
            cout<<"1 ruppe notes are :"<<notes<<endl;
        }

}
}