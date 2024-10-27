#include "insertion_sort.h"
#include <stdio.h>

struct node* isort(node *list) {

struct node *sorthead ; //points to first element in sorted list (head pointer)
struct node *new_node ; //pointer to new node taken from list
struct node *current; // value being compared in size to new node

//making first node in list to first element in sorted list
sorthead = list;

list = list->next;

sorthead->next = NULL; //Initialized to NULL


//condition that list has more than one element
while(list != NULL)
{
    //taking new node from list to sort
    new_node = list;
    list = list->next;
    new_node->next = NULL; 

//sorting mechanism

    //the case that the head of list needs to be replaced by new node
    // check for null first
     if(sorthead == NULL ||  new_node->data <= sorthead->data )
        {
            //placing new node in sorted list
            new_node->next = sorthead;
            sorthead = new_node;
        }
    
    else{
           current = sorthead;    
           //going through the sorted list 
           // check for null first
           while (current->next != NULL && current->next->data < new_node->data) 
           {
                current = current->next;
           }   
           
        //placing new node in sorted list
        new_node->next = current->next;
        current->next = new_node;
     } 

    }
return sorthead; //contains sorted list
}

