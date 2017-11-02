# Binary Trees

## Basics
- A binary tree is composed of nodes that contain a left pointer, a right pointer, and  a data element.
- The root pointer points to the topmost node in the tree.
- The left and right pointers point to smaller subtrees on either side.
- A null pointer represents a binary tree with no elements (an empty tree).
- The formal recursive definition is: a binary tree is either empty  or is made of a single node, where the left and right pointers each point to a binary tree.


## Binary Search Trees
- Binary search tree (BST) or "ordered binary tree" is a type of binary tree where the nodes are arranged in order.
- For each node, all elements in its left subtree are less than or or equal to the node, where as all elements in the right subtree are greater than the node.
- All nodes that have empty subtrees are called "leaf nodes" while all others are "internal" nodes.

## Traversal Algorithms
### Intro
- Traversal is a process of visiting all nodes in a tree.
- Since nodes cannot be randomly accessed, the traversal process must always begin at the root node.
- There are three ways to traverse a tree: in-order, pre-order, and post-order.

### In-Order Traversal
- First you visit the left subtree, then the root, then lastly the right subtree.

## Study Questions
1. What is the anatomy of a node in a binary tree?
2. Recite the recursive definition of a binary tree.
3. Define what is a subtree.
4. Explain the difference between a binary tree vs. a binary search tree.
5. What is the difference between a leaf node vs. an internal node?
6. Define what is a traversal algorithm.
7. True or false: binary trees are randomly accessible.
8. List the three types of traversal algorithms.
9. The root node is checked in which order while doing an in-order traversal?
10. Why would it be useful to use in-order traversal?
