/**Verifying whether the Stack is full: isFull()**/

#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = 7;  // Simulating a full stack

/* Check if the stack is full */
int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

/* Main function */
int main() {
    printf("Stack full: %s\n", isfull() ? "true" : "false");
    return 0;
}
