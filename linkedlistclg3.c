#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node at the beginning
void addNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to delete the first node
void deleteFirstNode(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("First node deleted.\n");
}

int main() {
    struct Node* head = NULL;
    int userData;

    printf("Enter 3 node values to add to the linked list:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &userData);
        addNode(&head, userData);
    }

    printf("Linked list before deletion:\n");
    displayList(head);

    printf("Deleting the first node...\n");
    deleteFirstNode(&head);

    printf("Linked list after deletion:\n");
    displayList(head);

    return 0;
}
