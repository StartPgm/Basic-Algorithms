
#include <stdio.h>
#include "linked.h"

int main(void)
{
  InitList();

  ShowList();

  AddNode('a');

  ShowList();

  AddNode('b');

  AddNode('c');

  for(int i = 100; i < 120; i++)
    AddNode((char)i);

  ShowList();

  int count =  ShowAll();
  printf("\n\n**%d Number of node exist.**\n", count);
   
  return 0;
}
