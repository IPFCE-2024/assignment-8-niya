#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void){

    stack q;

    printf("test results\n");

    /*initialising queue*/
    initialize(&q);

    /*enqueue*/
    push(6, &q);
    push(4, &q);
    push(7, &q);
    push(2, &q);
    push(5, &q);

    /*dequeue*/
    int b[5];

    for(int i = 0; i < 5; i++)
    {
        b[i] = pop(&q); //saving the popped data in an array
        printf("%d\n", b[i]);
    }

    printf("\nupdated queue:\n");
    for(int i = 0; i <= 3; i++)
    {
       int a = b[i];
        push(a, &q);
        printf("%d\n", b[i]);
    }

    return 0;
}