/**Retrieving topmost Element from Stack: peek()**/

#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

/* Function to return the topmost element in the stack */
int peek() {
    return stack[top];
}

/* Function to insert into the stack */
int push(int data) {
    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

/* Main function */
int main() {
    int i;
    push(88);
    push(21);
    push(39);
    push(105);
    push(77);

    printf("Stack Elements: \n");

    // print stack data
    for (i = 0; i < MAXSIZE; i++) {
        printf("%d ", stack[i]);
    }

    printf("\nElement at top of the stack: %d\n", peek());

    return 0;
}

