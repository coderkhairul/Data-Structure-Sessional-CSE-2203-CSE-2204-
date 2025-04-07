/**Verifying whether the Stack is empty: isEmpty()**/

#include <stdio.h>

#define MAXSIZE 8
int stack[MAXSIZE];
int top = 0; // Simulating a stack with one element

/* Check if the stack is empty */
int isempty() {
   return top == -1;
}

/* Main function */
int main() {
   printf("Stack empty: %s\n", isempty() ? "true" : "false");
   return 0;
}
