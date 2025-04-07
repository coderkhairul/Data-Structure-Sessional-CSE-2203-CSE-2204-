/**Stack Insertion: push()**/

#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isFull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

/* Function to insert into the stack */
int push(int data) {
    if (!isFull()) {
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

    // Print stack data
    for (i = 0; i < 8; i++) {
        printf("%d ", stack[i]);
    }

    return 0;
}
