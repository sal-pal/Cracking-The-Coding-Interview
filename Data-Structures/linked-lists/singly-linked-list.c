#include <stdio.h>

int main()
{
    struct Node {
        int value;
        struct Node *next;
    };
    
    struct Node tail;
    tail.value = 0;
    
    struct Node body;
    body.value = 1;
    body.next = &tail;
    
    struct Node head;
    head.value = 2;
    head.next = &body;
    
    struct Node n = head;
    while (0==0) {
        printf("%i\n", n.value);
        if (n.next == NULL) {break;};
        n = *n.next;
    };

    return 0;
}