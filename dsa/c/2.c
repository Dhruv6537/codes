// wap to reverse array
#include<stdio.h>
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",s[i]);
    }
}
