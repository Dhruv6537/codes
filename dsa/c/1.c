// wap to store a array and print sum of odd number
#include<stdio.h>
int main(){
    int a[6];
    int sum=0;
    printf("enter the element :");
    for(int i=0;i<=5;i++){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<=5;i++){
        printf("%d\n",a[i]);
    }
    
    for(int i=0;i<=5;i++){
        if(a[i]%2!=0){
            sum=sum+a[i];
        };
    }
    
    printf("%d",sum);

    return 0;
}