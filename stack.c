/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>
 
int stack[8];
int MAX_SIZE = 8; 
int top = -1;

int isEmpty()
{
   if(top == -1)
   {
     return 1;
   } else {
       return 0;
   }
    
}

int isFull()
{
  if(top == MAX_SIZE)
  {
    return 1;
  } else {
      return 0;
  }
    
}

int peek()
{
  return stack[top];
}

int pop()
{
  int data;
  
  if(!isEmpty())
  {
    data = stack[top];
    top = top-1;
    return data;
  } else {
    printf("can't get data, stack is empty");
  }
}

int push(int data)
{
  if(!isFull()){
      top = top+1;
    stack[top] = data;
  } else {
      printf("couldn't insert data, stack is full");
  }  
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    
    printf("element at top of stack is: %d", peek());
    
   while(!isEmpty())
    {
      int data = pop();
      printf("%d\n",data);
    }    
    
    printf("Stack full: %s\n" , isFull()?"true":"false");
   printf("Stack empty: %s\n" , isEmpty()?"true":"false");        
}
