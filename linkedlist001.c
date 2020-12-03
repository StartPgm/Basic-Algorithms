//C
//Linked list with one character data

#include <stdio.h>
#include <stdlib.h>
#include "linked.h"

int curnnum;
char curndata;
NODE *curnode;
NODE *prevnode;

NODE head = {0, '\0', &head, &head};
NODE rear = {0, '\0', &rear, &head};


void InitList(void)
{
  head.next = &rear;
  curnode = &rear;
  prevnode = &head;
}

void ShowList(void)
{
  printf("Current Node Number : %d\nCurrent Node Data : %c\n", curnode->nnum, curnode->data);
}

int AddNode(char ch)
{
  NODE* temp;
  temp = &head;
  while(temp->next != &rear)
  {
    temp = temp->next;
  }

  NODE* new = (NODE*)malloc(sizeof(NODE));
  new->nnum = (temp->nnum) + 1;
  new->data = ch;
  new->next = &rear;
  new->prev = temp;

  temp->next = new;
  rear.prev = new;

  curnode = new;
  prevnode = temp;
  
  return 0;
}

int ShowAll(void)
{
  int count = 0;
  NODE* ptr;
  ptr = &head;
  do
  {
    ++count;
    printf("Node Num : %3d, Node Data : %3c, Next node : %10p, Prev node : %10p\n", ptr->nnum, ptr->data, ptr->next, ptr->prev);
    ptr = ptr->next;
  } while (ptr != &rear);

  return count;
}
