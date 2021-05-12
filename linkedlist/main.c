/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

void PrintList(struct node *n){
    while(n != NULL){
        printf("%d \n", n->data);
        n= n->next;
        
    }
    
}

void insertList(struct node *n){
    while(n !=NULL){
         printf("%d \n", n->data);
        n =  n->next;
        if(n == NULL){
            n->data = 5;
        }
    }
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth =   malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));
    
    head->data = 10;
    head->next = second;

    second->data = 15;
    second->next = third;
    
    third->data = 20;
    third->next = fourth;
    
    fourth->data = 25;
    fourth->next = fifth;

    printf("Before Insertion \n");
    PrintList(head);
        
    head->data = 0;
    head->next = NULL;
    insertList(head);
    printf("after Insertion \n");
    
    PrintList(head);

    return 0;
}

