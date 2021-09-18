#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode
{
    int num;
    struct _listnode *next;
} ListNode;
typedef struct _linkedlist
{
    ListNode *head;
    int size;
} LinkedList;
typedef struct _queue
{
    LinkedList ll;
} Queue;
int main()
{
    Queue *q = malloc(sizeof(Queue));
    q->ll.size = 20;
    q->ll.head = NULL;
}