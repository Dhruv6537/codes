#include<iostream>
// #include<cstdlib>
using namespace std;

struct node {
    int data;
    struct node* next;
};

int n, i;

void create(struct node** head) {
    struct node* temp = NULL;
    cout << "enter n: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        cout << "enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;

        if (*head == NULL) {
            *head = newnode;
            temp = *head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void atbeg(struct node** head, int info) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = info;
    newnode->next = *head;   // Link new node to current head
    *head = newnode;         // Update new head pointer
}


void atend(struct node**head , int info){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = info;
    newnode->next = NULL;

    if(*head == NULL){
        *head = newnode;
        return;
    }

    struct node*temp = *head;
    // temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;


}

void atparticularloc(struct node**head , int info , int pos){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = info;
    newnode->next = NULL;
    if(pos == 1){
        *head = newnode;
        return;
    }
    struct node*temp = *head;
    for(i = 0; i<pos-1 ; i++){
        if(temp->next == NULL){
            cout<<"postion out of bounds"<<endl;
            free(newnode);
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    

}


void deleteatend(struct node**head ){
    struct node*temp =*head;
    struct node*prev;
    if(*head == NULL){
        free(temp);
        return;
    }
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    free(temp);
    prev->next=NULL;
    return;
}

void deleteatstart(struct node**head){
    struct node*temp = *head;
    struct node*prev;
    if(*head == NULL){
        cout<<"List is empty"<<endl;
    }
    prev = temp->next;
    free(temp);
    *head = prev;


}

void deleteatloc(struct node**head , int pos){
    struct node*temp = *head;
    struct node*prev;
    for(i=0 ;i <pos-1 ; i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);

}

void print(struct node* head) {
    struct node* temp;
    cout << "list is ->" << endl;

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    temp = head;
    while (temp!= NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    struct node* head = NULL;

    create(&head);
    // atbeg(&head, 10);
    // atend(&head, 20);
    // atparticularloc(&head, 30, 2);
    deleteatend(&head);
    deleteatstart(&head);
    deleteatloc(&head , 2);
    print(head);

    return 0;
}


