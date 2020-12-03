#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
   char Data;
   struct _NODE *Next;
} NODE;

NODE *head, *end, *temp;
NODE *temp1, *temp2, *temp3, *temp4;

void Initialize(void);
void InsertNode(NODE *);

void Initialize(void)
{
  NODE *ptr;
  head = (NODE *)malloc(sizeof(NODE));
  end = (NODE *)malloc(sizeof(NODE));

  temp1 = (NODE *)malloc(sizeof(NODE));
  temp1->Data = 'a';
  head->Next = temp1;
  temp1->Next = end;
  end->Next = end;
  ptr = temp1;

  temp2 = (NODE *)malloc(sizeof(NODE));
  temp2->Data = 'a';
  ptr->Next = temp2;
  temp2->Next = end;
  ptr = temp2;

  temp3 = (NODE *)malloc(sizeof(NODE));
  temp3->Data = 'a';
  head->Next = temp3;
  temp3->Next = end;
  ptr = temp3;

  temp4 = (NODE *)malloc(sizeof(NODE));
  temp4->Data = 'a';
  head->Next = temp4;
  temp4->Next = end;
  ptr = temp4;
} 

void InsertNode(NODE *ptr)
{
  NODE *indexptr;

  for(indexptr = head; indexptr != end; indexptr = indexptr->Next){
    if(indexptr->Next->Data > ptr->Data)
      break;
  }

  ptr->Next = indexptr->Next;
  indexptr->Next = ptr;
}

void main()
{
  NODE *ptr;
  int i = 0;
  Initialize();

  ptr = head->Next;

  for(i = 0; i < 4; i++) {
    printf("%2c", ptr->Data);
    ptr = ptr->Next;
  }

  printf("\n");
  temp = (NODE *)malloc(sizeof(NODE));
  temp->Data = 'C';

  InsertNode(temp);

  ptr = head->Next; 

  for(i = 0; i < 5; i++) {
    printf("%2c", ptr->Data);
    ptr = ptr->Next;
  }
}
