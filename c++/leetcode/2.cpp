// write a function that takes an unsigned and returns the number of 1 bits is has
#include<iostream>
using namespace std;

class solution{
    public:
    int result(int n){
        int count=0;
        while (n!=0)
        {
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        
        return count;
        
    }
};

int main(){
    solution ob;
    cout<<"count is :"<<ob.result(0000000000000000001111111111111011);
}