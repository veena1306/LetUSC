/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define size 5

struct queue
{ 
   int data;
   struct queue *next;
};

struct queue *front = NULL, *rear = NULL;


void enqueue(int val)
{
  struct queue *newNode = (struct queue*)malloc(sizeof(struct queue));
  newNode->data = val;
  newNode->next = NULL;
  
  if(front == NULL && rear == NULL)
  {
    front = rear = newNode;
  } else {
      
      rear->next = newNode;
      rear = newNode;
  }
  
}

void dequeue()
{
    struct queue *temp;
    temp = front;
    front = front->next;
    
    if(front == NULL)
        rear = NULL;
        
     free(temp);
}

void printList()
{
    struct queue *temp = front;

    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
   enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Queue :");
    printList();
    dequeue();
    printf("After dequeue the new Queue :");
    printList();
    dequeue();
    printf("After dequeue the new Queue :");
    printList();

}
