#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main (void){

    /*test 1*/

    queue q;

    initialize(&q);

    if( q.front == NULL && q.rear == NULL )
    printf("test 1 passed\n");

    else
    printf("test 1 failed\n");

    /*test 2*/

    enqueue(&q, 8);

    int a = dequeue(&q);

    if ( a == 8)
    printf("test 2 passed\n");

    else
    printf("test 2 failed\n");

    /*test 3*/

    queue w;

    enqueue(&w, 2);
    enqueue(&w, 4);

    int b = dequeue(&w);
    int c = dequeue(&w);

    if( b == 2 && c == 4)
    printf("test 3 passed\n");

    else
    printf("test 3 failed\n");

    return 0;
}