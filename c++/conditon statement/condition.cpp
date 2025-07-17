#include<iostream>
using namespace std;
int main(){
   char ch;
   cout<<"enter the character :"<<endl;
   cin>>ch;
   if(ch>='A' && ch<='Z'){
    cout<<"uppercase character"<<endl;
   }
   else if(ch>='a' && ch<='z'){
    cout<<"lowercase character"<<endl;
   }
   else if(ch>='0' && ch<='9'){
    cout<<"numbers"<<endl;
   }

   else{
    cout<<"none"<<endl;
   }


}