#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(queue *q) {
q->front = NULL;
q->rear = NULL;
q->size = 0;
}

bool empty(const queue *q) {
/*q = malloc(sizeof(node)); //allocating new memory so no data is stored, therefore empty
q->front = NULL;
q->rear = NULL;*/

if(q->front != NULL && q->rear != NULL)
return false;

else 
return true;
}

bool full(const queue *q) {
node* temp = malloc(sizeof(node));

if(temp != NULL) //if temp points to nothing, no memory can be allocated hence, it's full
{
    return false;
}

else
{
    return true;
}
}

void enqueue(queue *q, int x) {
node* temp = malloc(sizeof(node));

temp->data = x;

if(q->rear == NULL)
{
    q->rear = temp;
    q->front = temp;
}

q->rear->next = temp;

q->rear = temp;

(q->size)++;

q->rear->next = NULL;

}

int dequeue(queue *q) {

int a = q->front->data;

while(q->rear->next != NULL)
{
    q->rear = q->rear->next;
}

q->front = q->front->next;

if(q->front == NULL)
q->rear = NULL;

(q->size)--;

return a;
}
