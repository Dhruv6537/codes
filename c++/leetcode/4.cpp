// The compilent of an integer you get  when you flip all the '0's to '1's and all the '1's to '0's in its binary represenntation.

#include<iostream>
using namespace std;

class solution{
    public:
    int flip(int n){

        if(n==0){
            return 1;
        }
        int m=n;
        int mask=0;
        while(m!=0){
            mask=(mask << 1)|1;
            m=m >> 1;

        }
        int ans=(~n)&mask;
        cout<<ans;
        
    }
};

int main(){
    solution ob;
    ob.flip(5);
}  