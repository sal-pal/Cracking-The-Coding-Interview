#include <stdio.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};


int main()
{
    //Instantiate all nodes
    struct node root;
    root.value = 0;
    struct node internal1;
    internal1.value = 1;
    struct node internal2;
    internal2.value = 2;
    struct node leaf1;
    leaf1.value = 1;
    struct node leaf2;
    leaf2.value = 2;
    struct node leaf3;
    leaf3.value = 3;
    struct node leaf4;
    leaf4.value = 4;
    
    //Make each node point to its subtrees
    root.left = &internal1;
    root.right = &internal2;
    internal1.left = &leaf1;
    internal1.right = &leaf2;
    internal2.left = &leaf3;
    internal2.right = &leaf4;
    
    printf("%i", root.value);
    
    
    return 0;
}
