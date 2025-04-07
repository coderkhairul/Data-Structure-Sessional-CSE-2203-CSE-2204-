/**Stack Deletion: pop()**/

#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty */
int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

/* Check if the stack is full */
int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

/* Function to delete from the stack */
int pop() {
    int data;
    if (!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
        return -1; // return a default/error value
    }
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

    push(99);
    push(27);
    push(38);
    push(71);
    push(56);

    printf("Stack Elements: \n");
    for (i = 0; i < MAXSIZE; i++) {
        printf("%d ", stack[i]);
    }

    printf("\nElements popped: \n");
    while (!isempty()) {
        int data = pop();
        printf("%d ", data);
    }

    return 0;
}
