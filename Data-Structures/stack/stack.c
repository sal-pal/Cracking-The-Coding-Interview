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
     
     //Create a new node
     struct Node newNode;
     newNode.value = val;
     newNode.next = oldNode;
     
     //Place newNode on top of stack
     *stack = newNode;
     
}


int main() {
    struct Node stack;
    stack = create(0);
    push(&stack, 1);
    printf("%i", peak(stack));
}