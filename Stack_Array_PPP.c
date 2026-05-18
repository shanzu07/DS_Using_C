// 6 PARTS.
// INTRO
#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// PUSH(Addition of elements)
void push(int val){
    if(top == SIZE-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = val;
}

// POP(Removal of elements)
void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped : %d\n", stack[top]);
    top--;
}


// PEEK(Show top element)
void peek(){
    if(top == -1){
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element :%d\n", stack[top]);
}

// DISPLAY(Show all elements in the stack)
void printStack(){
    if(top == -1){
        printf("Stack is empty.");
        return;
    }

    printf("Stack :");
    for(int i=top; i>=0; i--)
        printf("%d", stack[i]);
    printf("\n");
}

// MAIN FUNCTION
int main(){
    push(10);
    push(20);
    push(30);

    printStack();

    peek();

    pop();
    printStack();

    return 0;

}