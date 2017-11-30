#include <stdio.h>
#include "../queues/bin-tree-queue.h"



void inorder_traversal(struct treeNode* root) {
  if (root != NULL) {
    inorder_traversal(root->left);
    printf("%i\n", root->value);
    inorder_traversal(root->right);
  }
}


void preorder_traversal(struct treeNode* root) {
  if (root != NULL) {
    printf("%i\n", root->value);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
  }
}


void postorder_traversal(struct treeNode* root) {
  if (root != NULL) {
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%i\n", root->value);
  }
}

void traverse_breadth_first(struct treeNode* root) {
  create();
  printf("%i\n", root->value);

  if (root->left != NULL) {
    enq(root->left);
  }
  if (root->right != NULL) {
    enq(root->right);
  }
  
  while (!queueIsEmpty()) {
    //Get the front node and print its value
    struct treeNode *node = frontelement();
    printf("%i\n", node->value);
    if (node->left != NULL) {
      enq(node->left);
    }
    if (node->right != NULL) {
      enq(node->right);
    }
    deq();
  }
}


int main()
{
    //Instantiate all treeNodes
    struct treeNode root;
    root.value = 0;
    root.left = NULL;
    root.right = NULL;

    struct treeNode internal1;
    internal1.value = 1;
    internal1.left = NULL;
    internal1.right = NULL;

    struct treeNode internal2;
    internal2.value = 2;
    internal2.left = NULL;
    internal2.right = NULL;

    struct treeNode leaf1;
    leaf1.value = 3;
    leaf1.left = NULL;
    leaf1.right = NULL;

    struct treeNode leaf2;
    leaf2.value = 4;
    leaf2.left = NULL;
    leaf2.right = NULL;

    struct treeNode leaf3;
    leaf3.value = 5;
    leaf3.left = NULL;
    leaf3.right = NULL;

    struct treeNode leaf4;
    leaf4.value = 6;
    leaf4.left = NULL;
    leaf4.right = NULL;

    //Make each treeNode point to its subtrees
    root.left = &internal1;
    root.right = &internal2;
    internal1.left = &leaf1;
    internal1.right = &leaf2;
    internal2.left = &leaf3;
    internal2.right = &leaf4;

    struct treeNode *rootPntr = &root;
    traverse_breadth_first(rootPntr);


    return 0;
}
