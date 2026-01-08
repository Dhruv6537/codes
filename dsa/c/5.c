// wap to delete an element in array in particular location
#include<stdio.h>
int main(){
    int a[50];
    int n;
    int element;
    int position;
    printf("enter no. of elements to be inserted :");
    scanf("%d",&n);
    for(int i=0 ; i<=n ; i++){
        scanf("%d",&a[i]);

    }

    printf("which element is to be deleted :");
    scanf("%d",&element);

    printf("on which positon it is present:");
    scanf("%d",&position);

    for(int i=0 ; i<=n ; i++){
        if(i==position){
            continue;
        }
        printf("%d\n",a[i]);
    }


    
}