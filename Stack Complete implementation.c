/**Stack Complete implementation**/

#include <stdio.h>

#define MAXSIZE 8
int stack[MAXSIZE];
int top = -1;

/* Check if the stack is empty */
int isempty() {
    return top == -1;
}

/* Check if the stack is full */
int isfull() {
    return top == MAXSIZE - 1;
}

/* Function to return the topmost element in the stack */
int peek() {
    if (!isempty()) {
        return stack[top];
    } else {
        printf("Stack is empty.\n");
        return -1; // Return an invalid value to indicate error
    }
}

/* Function to delete from the stack */
int pop() {
    if (!isempty()) {
        return stack[top--];
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
        return -1; // Return an invalid value to indicate error
    }
}

/* Function to insert into the stack */
void push(int data) {
    if (!isfull()) {
        stack[++top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

/* Main function */
int main() {
    push(99);
    push(27);
    push(38);
    push(71);
    push(56);

    printf("Element at top of the stack: %d\n", peek());

    printf("Elements:\n");
    // Print stack data
    while (!isempty()) {
        printf("%d\n", pop());
    }

    printf("Stack full: %s\n", isfull() ? "true" : "false");
    printf("Stack empty: %s\n", isempty() ? "true" : "false");

    return 0;
}
