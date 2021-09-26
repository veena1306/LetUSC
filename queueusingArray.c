/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define size 5


int arr[size];

int front = 0;
int rear = 0;

int isEmpty()
{
    if(front == rear)
     return 1;
    return -1;
}

int isFull()
{
  if(rear == size)
     return 1;
    return -1;
    
}

void dequeue()
{
    if(isEmpty() == 1)
    {
      printf("queue is empty");
    } else {
        int data = arr[front];
        front++;
        printf("%d",data);
    }

}


void enqueue(int val)
{
  if(isFull() == 1)
  {
     printf("queue is full");
  } else {
     arr[rear] = val;;
     rear++;
  }
}

int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   enqueue(50);
   enqueue(60);    //Can't insert 60 as the queue is full.
   dequeue();      //10
   dequeue();      //20
   dequeue();      //30
   dequeue();      //40
   dequeue();      //50
   dequeue();  
}
