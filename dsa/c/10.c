#include<stdio.h>

struct node{
    int data;
    struct node*next;
};

struct node*head=NULL,*temp=NULL;
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int data;
    head=newnode;
    temp=head;
    for(int i=1;i<=n;i++){
        struct node *newNode = malloc(sizeof(struct node));
        printf("data:");
        scanf("%d",&newnode->data);
    }
    printf("list is:");

    for(int i=1 ; i<=n ; i++){
        printf("%d",temp->next);
        temp=temp->next;
    }


}