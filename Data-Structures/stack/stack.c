//Use a singly linked list to implement a stack

#include<stdio.h>

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

void push(struct Node *stack) {
    
}

int main() {
    struct Node stack;
    stack = create(0);
    //push(*stack, 1);
    printf("%i", peak(stack));
}
