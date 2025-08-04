// wap to perform different operation such as insertion(push) deletion(pop) in stack . Also display all element in stack after operation 

#include<stdio.h>

int stack[10];
int top=-1;
int value;

void push(){
    
    if(top==9){
        printf("overflow");
    }
    else
    {top=top+1;
    printf("enter the element :");
    scanf("%d",&value);
    stack[top]=value;
    }
        

    
}


void delete(){
    if(top== -1){
        printf("underflow");
    }
    else{
        top=top-1;

    }
}

void display(){
    for(int i=top ; i>=0 ; i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    int n;
    while(n){
        printf("enter n :");
        scanf("%d",&n);
        switch(n){
            case 1:
            push();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            printf("invalid");
            break;
        }
    }
}

