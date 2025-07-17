// give an integer n , return true if it is power of 2. otherwiase return false . An integer n is a power of 2, if there exist an integer x 
// such that n==2^x

#include<iostream>
#include<math.h>
using namespace std;

class solution{
    public:
    int n;
    int ans=1;
    bool ispower(int n){
        for(int i=0; i<=30 ; i++){
            if(ans==n){
                return true;
            }
            if(ans<INT32_MAX){

                ans=ans*2;
            }

            
        }
        return false; 
    }


};
int main(){
solution ob;
cout<<ob.ispower(1024);
}