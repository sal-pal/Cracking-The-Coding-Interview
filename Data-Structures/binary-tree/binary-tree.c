#include <stdio.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};


void inorder_traversal(struct node* root) {
  if (root != NULL) {
    inorder_traversal(root->left);
    printf("%i\n", root->value);
    inorder_traversal(root->right);
  }
}


int main()
{
    //Instantiate all nodes
    struct node root;
    root.value = 0;
    root.left = NULL;
    root.right = NULL;

    struct node internal1;
    internal1.value = 1;
    internal1.left = NULL;
    internal1.right = NULL;

    struct node internal2;
    internal2.value = 2;
    internal2.left = NULL;
    internal2.right = NULL;

    struct node leaf1;
    leaf1.value = 1;
    leaf1.left = NULL;
    leaf1.right = NULL;

    struct node leaf2;
    leaf2.value = 2;
    leaf2.left = NULL;
    leaf2.right = NULL;

    struct node leaf3;
    leaf3.value = 3;
    leaf3.left = NULL;
    leaf3.right = NULL;

    struct node leaf4;
    leaf4.value = 4;
    leaf4.left = NULL;
    leaf4.right = NULL;

    //Make each node point to its subtrees
    root.left = &internal1;
    root.right = &internal2;
    internal1.left = &leaf1;
    internal1.right = &leaf2;
    internal2.left = &leaf3;
    internal2.right = &leaf4;

    struct node *rootPntr = &root;
    inorder_traversal(rootPntr);


    return 0;
}
