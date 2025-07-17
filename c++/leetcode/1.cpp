// Give an integer n , return the difference between the product of its digit and the sum of its digit

#include<iostream>
using namespace std;

class solution{
    public:
    

    int result(int n){
    int prod=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;

        n=n/10;
    }
    int ans=prod-sum;
    return ans;
    }
};

int main(){
    solution obj;
    cout<<"result is :"<<obj.result(34567);
}

