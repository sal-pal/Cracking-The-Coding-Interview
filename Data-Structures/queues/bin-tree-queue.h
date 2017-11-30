/*
 * C Program to Implement Queue Data Structure using Linked List
 */
#include <stdio.h>
#include <stdlib.h>


struct treeNode {
    int value;
    struct treeNode *left;
    struct treeNode *right;
};


struct listNode
{
    struct treeNode data;
    struct listNode *ptr;
}*front,*rear,*temp,*front1;


int count = 0;


/* Create an empty queue */
void create()
{
    front = rear = NULL;
}

/* Enqueing the queue */
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct listNode *)malloc(1*sizeof(struct listNode));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct listNode *)malloc(1*sizeof(struct listNode));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;

        rear = temp;
    }
    count++;
}

/* Dequeing the queue */
void deq()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}

/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}
