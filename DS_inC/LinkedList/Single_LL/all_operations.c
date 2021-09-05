// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

void insert_at_head(struct node **head, int data)
{
 struct node *new_node = (struct node*)malloc(sizeof(struct node));
 struct node *temp = *head;
 
 new_node->data = data;
 new_node->next = NULL;
 
 if(*head == NULL)
 {
     *head = new_node;
     return;
 }
 
 while(temp->next != NULL)
    temp = temp->next;
  temp->next = new_node;
   return;
}

int insert_at_begining(struct node **head, int new_node)
{
    struct node *temp_node = (struct node*)malloc(sizeof(struct node));
    temp_node->data = new_node;
    
    temp_node->next = *head;
    *head = temp_node;
}

void insert_after(struct node *prev_node, int data)
{
    if(prev_node == NULL)
    {
      printf("can't exists");
    }
struct node *n = (struct node*)malloc(sizeof(struct node));
n->data = data;
    n->next = prev_node->next;
    prev_node->next = n;
}

void printLL(struct node *head)
{
    while(head != NULL)
    {
      printf("%d--",head->data);
      head = head->next;
    }
    
}

int main() {
    // Write C code here
    printf("Hello world\n");
    struct node *head = NULL;
    insert_at_head(&head,6);
    insert_at_begining(&head,7);
    insert_at_begining(&head,1);
    insert_at_head(&head,3);
    insert_after(head->next,8);

    printLL(head);
    return 0;
}











