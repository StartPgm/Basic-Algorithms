//Linked list header

typedef struct _node
{
  int nnum;
  char data;
  struct _node* next;
  struct _node* prev;
} NODE;

void InitList(void);
void ShowList(void);
int AddNode(char ch);
int ShowAll(void);


