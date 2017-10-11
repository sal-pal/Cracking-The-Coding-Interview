//Use a singly linked list to implement a stack

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

struct Node create(val) {
    struct Node node;
    node.value = val;
    return node;
}

int peak(struct Node stack) {
    return stack.value;
}

void push(struct Node *stack, int val) {
     //Move oldNode lower on the stack
     struct Node *oldNode = malloc(sizeof(struct Node));
     *oldNode = *stack;
     
     struct Node newNode;
     newNode.value = val;
     newNode.next = oldNode;
     
     //Place newNode on top of stack
     *stack = newNode;
     
}

int pop(struct Node *stack) {
    //Place node second from top onto the top of the stack
    *stack = *(*stack).next;
    return (*stack).value;
}


int main() {
    struct Node stack;
    stack = create(0);
    
    //Push 100 values on the stack
    for (int i=1; i <= 99; i++) {
        push(&stack, i);
    }
    
    //Pop 99 values from the stack
    for (int i=0; i < 99; i++) {
        pop(&stack);
    }
    
    printf("%i", peak(stack));
}