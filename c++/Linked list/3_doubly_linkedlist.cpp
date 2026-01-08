#include<iostream>
using namespace std;

struct node{
    struct node*prev;
    int data;
    struct node*next;
};


int n,i;
void create(struct node**head){
    cout<<"enter number of nodes:";
    cin>>n;
    struct node*temp = NULL;
    for(i=0 ; i<n ; i++){
        struct node*newnode = (struct node*)malloc(sizeof(struct node));
        cout<<"enter data:";
        cin>>newnode->data;
        newnode->next = NULL;
        if(*head == NULL){
            *head = newnode;
            temp = *head;
            temp->prev = NULL;

        }else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;

        }



    }

}

// void insertstart(struct node*head){


// }
void print(struct node*head){
    struct node* temp;
    temp = head;

    if(head == NULL){
        cout << "List is empty." << endl;
        return;

    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

void printreverse(struct node*head){
    struct node*temp;
    temp = head;
    while(temp != NULL){
        temp = temp->next;

    }
    while(temp!= NULL){
        cout<<temp->data<<"<-";
        temp = temp->prev;
        
    }
    cout<<"NULL";

}

int main(){
    struct node*head = NULL;
    create(&head);
    // print(head);
    printreverse(head);
}
