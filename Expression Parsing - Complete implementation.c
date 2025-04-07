/**Expression Parsing - Complete implementation**/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//char stack
char stack[25];
int top = -1;

void push(char item) {
   stack[++top] = item;
}

char pop() {
   return stack[top--];
}

//returns precedence of operators
int precedence(char symbol) {
   switch(symbol) {
      case '+':
      case '-':
         return 2;
      case '*':
      case '/':
         return 3;
      case '^':
         return 4;
      case '(':
      case ')':
      case '#':
         return 1;
   }
   return 0;
}

//check whether the symbol is operator?
int isOperator(char symbol) {
   switch(symbol) {
      case '+':
      case '-':
      case '*':
      case '/':
      case '^':
      case '(':
      case ')':
         return 1;
      default:
         return 0;
   }
}

//converts infix expression to postfix
void convert(char infix[],char postfix[]) {
   int i, symbol, j = 0;
   stack[++top] = '#';

   for(i = 0; i < strlen(infix); i++) {
      symbol = infix[i];

      if(isOperator(symbol) == 0) {
         postfix[j++] = symbol;
      } else {
         if(symbol == '(') {
            push(symbol);
         } else if(symbol == ')') {
            while(stack[top] != '(') {
               postfix[j++] = pop();
            }
            pop();   //pop out '('
         } else {
            while(precedence(symbol) <= precedence(stack[top])) {
               postfix[j++] = pop();
            }
            push(symbol);
         }
      }
   }

   while(stack[top] != '#') {
      postfix[j++] = pop();
   }

   postfix[j] = '\0';  //null terminate string.
}

//int stack
int stack_int[25];
int top_int = -1;

void push_int(int item) {
   stack_int[++top_int] = item;
}

int pop_int() {
   return stack_int[top_int--];
}

//evaluates postfix expression
int evaluate(char *postfix) {
   char ch;
   int i = 0, operand1, operand2;

   while((ch = postfix[i++]) != '\0') {
      if(isdigit(ch)) {
         push_int(ch - '0');  // Push the operand
      } else {
         operand2 = pop_int();
         operand1 = pop_int();

         switch(ch) {
            case '+': push_int(operand1 + operand2); break;
            case '-': push_int(operand1 - operand2); break;
            case '*': push_int(operand1 * operand2); break;
            case '/': push_int(operand1 / operand2); break;
         }
      }
   }

   return stack_int[top_int];
}

void main() {
   char infix[25] = "3+(4*5)-6", postfix[25];
   convert(infix, postfix);

   printf("Infix expression is: %s\n", infix);
   printf("Postfix expression is: %s\n", postfix);
   printf("Evaluated expression is: %d\n", evaluate(postfix));
}
