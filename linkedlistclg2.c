#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Function to delete the first node of the linked list
void deleteFirstNode(struct Node** head_ref) {
    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
}

// Function to delete the last node of the linked list
void deleteLastNode(struct Node** head_ref) {
    if (*head_ref == NULL)
        return;
    if ((*head_ref)->next == NULL) {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }
    struct Node* temp = *head_ref;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Function to delete a node at a specific position
void deleteNodeAtPosition(struct Node** head_ref, int position) {
    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;
    if (position == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return;
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;

    while (1) {
        printf("\n1. Insert at beginning\n");
        printf("2. Delete first node\n");
        printf("3. Delete last node\n");
        printf("4. Delete node at specific position\n");
        printf("5. Print list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                deleteFirstNode(&head);
                printf("First node deleted.\n");
                break;
            case 3:
                deleteLastNode(&head);
                printf("Last node deleted.\n");
                break;
            case 4:
                printf("Enter position to delete node: ");
                scanf("%d", &position);
                deleteNodeAtPosition(&head, position);
                printf("Node at position %d deleted.\n", position);
                break;
            case 5:
                printf("Linked list: ");
                printList(head);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
