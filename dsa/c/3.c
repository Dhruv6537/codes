// wap to print fibonacci series
#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    int next=0;
    printf("enter n :");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    
    for(int i=1;i<=n;++i){
        next=a+b;
        a=b;
        b=next;
        printf("%d\n" , next);
        
    }
    

}
