#pragma once

#include <stdbool.h>

#include "node.h"
 
typedef struct queue {
  int size; 
  node *front; //I think the two node pointers are here so the tail and head stay together?
  node *rear;
} queue;

void initialize(queue *q);
bool empty(const queue *q);
bool full(const queue *q);
void enqueue(queue *q, int x);
int dequeue(queue *q);
