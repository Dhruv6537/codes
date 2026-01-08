#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the beginning of the list
struct Node* insertBeginning(struct Node* head, int data) {
    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    // Make newNode point to the current head
    newNode->next = head;
    // Update head to be the new node
    head = newNode;
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function demonstrating the linked list creation and insertion
int main() {
    struct Node* head = NULL; // Empty list initially

    // Insert nodes at beginning
    head = insertBeginning(head, 10);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 30);

    // Print the linked list
    printList(head);  // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}
