#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.");
        return;
    }
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void insertAtEnd(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.");
        return;
    }
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) 
    {
        *head_ref = new_node;
        return;
    }
    struct Node* last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void insertAtPosition(struct Node** head_ref, int new_data, int position)
{
    if (position < 0) {
        printf("Invalid position.");
        return;
    }
    if (position == 0)
    {
        insertAtBeginning(head_ref, new_data);
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) 
    {
        printf("Memory allocation failed.");
        return;
    }
    new_node->data = new_data;
    struct Node* current = *head_ref;
    for (int i = 0; i < position - 1 && current != NULL; i++) 
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Position is beyond the end of the list. Inserting at the end.\n");
        insertAtEnd(head_ref, new_data);
        return;
    }
    new_node->next = current->next;
    current->next = new_node;
}
void printList(struct Node* node) 
{
    printf("Linked list: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main() 
{
    struct Node* head = NULL;
    int data, num_nodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &num_nodes);
    printf("Enter the data for each node:\n");
    for (int i = 0; i < num_nodes; ++i) 
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }
    insertAtBeginning(&head, 5);
    printList(head);
    insertAtEnd(&head, 10);
    printList(head);
    insertAtPosition(&head, 7, 4);
    printList(head);
    return 0;
}