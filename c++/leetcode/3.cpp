/* give a signed 32 bit integer x , return x with its digit reversed. if reversing x causes the value to go outside the signeed 32 bit integer 
range[-2^31, 2^31-1], then return 0;*/

#include<iostream>
#include<math.h>
using namespace std;
class solution{
    public:
    int reverse(int n){
        int ans=0;
        while(n!=0){
            int digit=n%10;
            if( ( ans>INT32_MAX/10 ) || ( ans<INT32_MIN/10 )){
                return 0;
            }
            ans=(ans*10)+digit;
            n=n/10;

        }
        
        return ans;
    }
};

int main(){
    solution ob;
    cout<<ob.reverse(123456789);
}
