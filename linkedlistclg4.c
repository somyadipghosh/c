#include <stdio.h>
#include <stdlib.h>

// Define a node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end
void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node with a specific key (data)
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;

    // If the head node contains the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next;  // Change head
        free(temp);          // Free memory
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not found in the list
    if (temp == NULL) {
        printf("Node with data %d not found.\n", key);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);  // Free memory
}

// Function to display the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate the linked list
int main() {
    Node* head = NULL;

    // Inserting some nodes
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);

    printf("Linked List: ");
    displayList(head);

    // User input to delete a node
    int key;
    printf("Enter the data of the node to delete: ");
    scanf("%d", &key);

    // Deleting the node with user input
    deleteNode(&head, key);

    printf("Updated Linked List: ");
    displayList(head);

    return 0;
}