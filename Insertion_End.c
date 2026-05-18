// 4 PARTS.
// INTRO
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// INSERTEND (Add new node at the end)
void insertEnd(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;    // new node always points to NULL

    if (*head == NULL) {     // if list is empty
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)   // go to last node
        temp = temp->next;

    temp->next = newNode;    // link last node to new node
}

// DISPLAY (Show all elements in the list)
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// MAIN FUNCTION
int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printList(head);   // 10 -> 20 -> 30 -> NULL
    return 0;
}