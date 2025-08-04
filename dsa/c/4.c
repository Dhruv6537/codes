// wap to insert an element in array in particular location

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

    printf("which element is to be inserted :");
    scanf("%d",&element);

    printf("on which positon is to be inserted :");
    scanf("%d",&position);
// shifting position 
    for(int i=n ; i>position ; i--){
        a[i]=a[i-1];
    }

    a[position]=element;

    for(int i=0 ; i<=n ; i++){
        printf("%d\n",a[i]);
    }



}

