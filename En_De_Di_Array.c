// 5 PARTS.
// INTRO
#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// ENQUEUE (Addition of elements)
void enqueue(int val){
    if(rear == SIZE-1){
        printf("Queue is full.\n");
        return;
    }
    if(front == -1)
        front = 0;
    rear++;
    queue[rear] = val;
}

// DEQUEUE (Removal of elements)
void dequeue(){
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;
    if(front > rear){
        front = -1;
        rear = -1;
    }
}

// DISPLAY (Show all elements in the queue)
void display(){
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

// MAIN FUNCTION
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();   

    dequeue();   
    display(); 

    dequeue();
    display();

    return 0;
}