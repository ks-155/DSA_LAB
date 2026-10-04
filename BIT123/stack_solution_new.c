#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 15

int stack[MAX];
int top = -1;

// Function to push an element to the stack
void push(int item) {
    if (top >= MAX - 1) {
        printf("\nStack Overflow.");
    } else {
        stack[++top] = item;
    }
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Stack Underflow.");
        exit(1);
    } else {
        return stack[top--];
    }
}

// Function to evaluate the postfix expression
int evaluatePostfix(char* postfix) {
    int i, op1, op2, result;
    char ch;

    for (i = 0; postfix[i] != '\0'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            // Push operand to stack
            push(ch - '0'); // Convert char to int
        } else {
            // Operator encountered
            // Pop two operands from stack
            op2 = pop();
            op1 = pop();

            switch (ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                default:
                    printf("Invalid operator encountered.");
                    exit(1);
            }

            // Push result back to stack
            push(result);
        }
    }

    // Final result is in the stack
    return pop();
}

// Main function
int main() {
    char postfix[MAX];
    int result;

    printf("Enter Postfix Expression: ");
    gets(postfix);

    result = evaluatePostfix(postfix);
    printf("The result of the Postfix expression is: %d\n", result);

    return 0;
}
