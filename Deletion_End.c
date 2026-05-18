// INTRO
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

// DELETEBEGIN (Remove first node)
void deleteBegin(struct Node**head){
    if(*head == NULL){
        printf("List is empty.\n");
        return;
    }

    struct Node*temp = *head;
    *head = (*head)->next;
    free(temp);
}

// PRINTLIST (Show all elements in the list)
void printList(struct Node*head){
    while(head != NULL){
        printf("%d->", head->data);
        head =head->next;
    }
    printf("NULL\n");

}

// MAIN (Where program runs)
int main(){
    struct Node*head = NULL;

    struct Node*n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*n3 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;
    head = n1;

    printf("Before Deletoion:"); printList(head);

    deleteBegin(&head);

    printf("After Deletion:"); printList(head);

    return 0;

}
