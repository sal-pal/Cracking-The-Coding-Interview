#include <stdio.h>
#include "../queues/bin-tree-queue.h"



void inorder_traverse(struct treeNode* root) {
  if (root != NULL) {
    inorder_traverse(root->left);
    printf("%i\n", root->value);
    inorder_traverse(root->right);
  }
}


void preorder_traverse(struct treeNode* root) {
  if (root != NULL) {
    printf("%i\n", root->value);
    preorder_traverse(root->left);
    preorder_traverse(root->right);
  }
}


void postorder_traverse(struct treeNode* root) {
  if (root != NULL) {
    postorder_traverse(root->left);
    postorder_traverse(root->right);
    printf("%i\n", root->value);
  }
}

void breadth_first_traverse(struct treeNode* root) {
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
