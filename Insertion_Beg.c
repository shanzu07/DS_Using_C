// 4 PARTS.
// INTRO
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

// INSERTBEGIN (Add new node at the beginning)
void insertBegin(struct Node**head, int val){
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *head;   // 20--->30
    *head = newNode;         // 20 = newNode, then 10--->20(10 = newNode)

}

// DISPLAY (Show all elements in the list)
void printList(struct Node*head){
    while(head != NULL){
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NUll\n");
}

// MAIN FUNCTION
int main(){
    struct Node*head = NULL;

    insertBegin(&head, 30);
    insertBegin(&head, 20);
    insertBegin(&head, 10);

    printList(head);
    return 0;
}